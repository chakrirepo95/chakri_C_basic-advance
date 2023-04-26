#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int a; // data_processed;
    int file_pipes[2];
    const char some_data[] = "456";
    char buffer[BUFSIZ + 1]={0};
    memset(buffer,'\0',sizeof(buffer));

    if (pipe(file_pipes) == 0)
    {

	    a = write(file_pipes[1], some_data, strlen(some_data));
	    printf("Wrote %d bytes\n", a);
	    a = read(file_pipes[0], buffer, BUFSIZ);
	    printf("Read %d bytes: %s\n", a, buffer);
	    exit(EXIT_SUCCESS);
    }
    exit(EXIT_FAILURE);
}
