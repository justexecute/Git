#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
int i=0;
int main(int argc,char *argv[])
{

    if (argc != 2)
       {
	printf("Syntax: %s [language] ", argv[0]);
	return -1;
	}

	while (argv[1][i] !='\0')
	{
	i++;
	}
	printf("length : %d\n",i);
	
	
	

}


