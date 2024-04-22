#include<stdio.h>
#include<stdlib.h>
/*int size_enter()
{
	int i;
	do
	{
		printf("give the size of T");
	    scanf("%d",&i);
	}while(i<=1);
	return i;
}*/
void size_enter(int *n)
{
	do
	{
		printf("give the size of the arry");
		scanf("%d",n);
	}while(*n<=1);
}
/*void load(int t[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("give t[%d]",i);
		scanf("%d",&t[i]);
	}
}*/
/*void load(int *t,int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("give t[%d]",i);
		scanf("%d",t+i);
	}
}*/
void load(int *t,int n)
{
	int *p;
	for (p=t;p<t+n;p++)
	{
		printf("give t[%d]",p-t);
		scanf("%d",p);
	}
}
/*void display(int t[], int n)
{
	int i;
	for (i=0;i<n)
}*/
void display(int *t, int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("give t[%d]=%d\t",i,*(t+i));
	}
	printf("\n");
}
int* seq(int *t,int x,int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(*(t+i)==x)
		{
			return t+i;
		}
	}
	return NULL;	
}
/** seq(int *t;int x;int n)
{
	int *p;
	for(p=t,p<t+n;t++)
	{
		if(*p==x)
		{
			return p;
		}
	}
	return NULL;	
}*/
int* Max(int *t,int n)
{
	int i;
	int *max;
	max=t;
	for(i=1;i<n;i++)
	{
		if(*(t+i)>*max)
		{
			max=t+i;
		}
	}
	return max;
}
/*int* max(int *t,int n)
{
	int *max=t;
	int *p;
	for(p=t+1;p<t+n;p++)
	{
		if(*p>*max)
		{
			max=p
		}
	}
	return max;
}*/
void elem(int *t,int n,int x)
{
	int *e;
	int *i;
	e=seq(t,x,n);
	for(i=t+(n-1);(i>e);i--)
	{
		*(i-1)=*(i);
	}
	
}
int main()
{
	int n,x;
	int *t;
	int *max,*adr;
	size_enter(&n);
	/*int *t= malloc(n* sizeof (int));*/
	t=(int *)malloc(n*sizeof(int));
	load(t,n);
	display(t,n);
	max=Max(t,n);
	printf("%d \n",*max);
	printf("give x \n");
	scanf("%d",&x);
	printf("the address of max=%d \n the max is=%d\n",max,*max);
	adr=seq(t,x,n);
	elem(t,n,x);
	display(t,n-1);
	free(t);
	return 0;
	
}
