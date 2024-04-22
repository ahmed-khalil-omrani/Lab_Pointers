#include<stdio.h>
#include<stdlib.h>
#include"Ex 5.h"
int main()
{
	int n; 
	int *t;
	sizeenter(&n);
	t=(int *)malloc(n*sizeof(int));
	load(t,n);
	Display(n,t);
	printf("")
}
