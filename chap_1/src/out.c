#include "stdio.h"
int main(int argc,char** argv){
	int i = 0;
	if(argc != 2)
	{
		printf("parameter number error!");
		return 0;
	}
	while(i<5)
	{
		i++;
		printf("hello %s\n",argv[1]);
	}
}
