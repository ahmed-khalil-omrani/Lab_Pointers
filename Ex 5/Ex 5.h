#include<stdio.h>
#include<stdlib.h>
void sizeenter(int *n)
{
	do{
		printf("give the size of the array ");
		scanf("%d",n);
	}while(*n<1);
	return n;
}

void load(int *t,int n)
{
	int *p;
	for (p=t;p<t+n;p++)
	{
		printf("give t[%d]",p-t);
		scanf("%d",p);
	}
}
void Display(int n,int *t)
{
	int *p;
	for(p=t;p<t+n;p++)
	{
		printf("the value of t[%d]=%d\n",p-t,*p);
	}
}
void SEQ()
