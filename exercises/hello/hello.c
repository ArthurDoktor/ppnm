#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"


int main(void){
	char *buf;
	buf=(char *)malloc(10*sizeof(char));
	buf=getlogin();
	printf("hello, %s\n",buf);
return 0;
}
