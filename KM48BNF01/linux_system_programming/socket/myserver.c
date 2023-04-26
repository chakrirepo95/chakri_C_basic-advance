#include"ck.h"

void *myread();
void *mywrite();

pthread_t a,b;
void *pthread_result;

int server_sockfd, client_sockfd;
int server_len, client_len;

struct sockaddr_in server_address;

struct sockaddr_in client_address;

int main()
{
	/* Create a socket for the client. */
	
	server_sockfd = socket(AF_INET, SOCK_STREAM, 0);
	
	/* Name the socket, as agreed with the server. */
	server_address.sin_family = AF_INET;

	server_address.sin_addr.s_addr = inet_addr("127.0.0.1");

	server_address.sin_port = 9734;

	server_len = sizeof(server_address);

	bind(server_sockfd, (struct sockaddr *)&server_address, server_len);
	/* Create a connection queue and wait for clients. */
	
	listen(server_sockfd, 5);
	
	/* Accept a connection. */
	client_len = sizeof(client_address);
	
	client_sockfd = accept(server_sockfd,
			(struct sockaddr *)&client_address, &client_len);
	/* Now connect our socket to the server's socket. */	
	
	int creat_ret=pthread_create(&a,0,myread,0);
	if (creat_ret<0)
		perror("pthread 1 creat fail ");

	creat_ret=pthread_create(&b,0,mywrite,0);
	if (creat_ret<0)
		perror("pthread 2 creat fail ");

	int join_ret=pthread_join(a,&pthread_result);
	if (join_ret<0)
		perror("join1 fail");

	join_ret=pthread_join(b,&pthread_result);
	if (join_ret<0)

		perror("join2 fail");

}

void *myread()
{
	char data[100];
	while (1)
	{
		read(client_sockfd, data, 100); 
		printf("char from client : %s\n", data);
	}
	pthread_exit("exit");
}

void *mywrite()
{
	char data[100];
	while (1)
	{	
		fgets(data, 100, stdin);
		write(client_sockfd,data,100);
	}
	pthread_exit("exit");
}
