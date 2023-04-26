#include"ck.h"

void *myread();
void *mywrite();



pthread_t a,b;

void *pthread_result;
int sockfd;
int len;
struct sockaddr_in address;
int result;

int main()
{
	/* Create a socket for the client. */

	sockfd = socket(AF_INET, SOCK_STREAM, 0);

	/* Name the socket, as agreed with the server. */

	address.sin_family = AF_INET;

	address.sin_addr.s_addr = inet_addr("127.0.0.1");

	address.sin_port = 9734;

	len = sizeof(address);

	/* Now connect our socket to the server's socket. */

	result = connect(sockfd, (struct sockaddr *)&address, len);

	if(result == -1) {

		perror("oops: server");

		exit(1);

	}

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
		read(sockfd,data, 100);
		printf("char from server : %s\n", data);
	}
	pthread_exit("exit");
}

void *mywrite()
{
	char data[100];
	while (1)
	{	
		fgets(data, 100, stdin);
		write(sockfd,data,100);
	}
	pthread_exit("exit");
}
