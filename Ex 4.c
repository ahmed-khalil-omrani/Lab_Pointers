#include<stdio.h>
#include<stdlib.h>
void remp (int *t,int n,int m)
{
	int *p;
	int l,c;
	for(p=t;p<t+(n*m);p++)
	{
	
		  l=((p-t)/m);
		  c=(p-t)-(m*l);
		  printf("give t[%d][%d]",l,c);
		  scanf("%d",p);
	}
}
void print (int *t,int n,int m)
{
	int *p;
	int l,c;
	for(p=t;p<t+(n*m);p++)
	{
		l=((p-t)/m);
		c=(p-t)-(m*l);
		printf("t[%d][%d]=%d\n",l,c,*p);
	}
}
void cal_sum(int *t,int *sum,int n,int m)
{
	int *p;
	*sum=0;
	for(p=t;p<t+(n*m);p++)
	  *sum=*sum+*p;
	printf("the sum=%d",*sum);
	
}
int main()
{
	int n,m;
	int *t;
	int *sum;
	printf("give n:");
	scanf("%d",&n);
	printf("give m:");
	scanf("%d",&m);
	t=(int *)malloc((n*m)*sizeof(int));
	remp(t,n,m);
	print(t,n,m);
	cal_sum(t,sum,n,m);
}
