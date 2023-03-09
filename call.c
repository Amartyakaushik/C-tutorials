#include<stdio.h>
#include"dec.h"
#include"def.c"
int main()
{
	int i;
	printf("the function is %d\n",callcount);
	for(i=0;i<5;i++)
	{
		somefunction();
		printf("the function is %d\n",callcount);
	}
	return 0;
}
