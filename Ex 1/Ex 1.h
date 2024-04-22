#include<stdio.h>
void permute(char *c1,char *c2)
{
	char *aux;
	*aux=*c1;
	*c1=*c2;
	*c2=*aux;
	
}
