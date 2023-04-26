#include"ck.h"

const char *shmaddr="sk";
 
int main()
{

	shmctl(53,IPC_RMID,0);
}
