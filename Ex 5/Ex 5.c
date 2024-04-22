#include<stdio.h>
#include<stdlib.h>
void size_enter(int *n)
{
	do
	{
		printf("give the size of t");
		scanf("%d",n);
	}while(n<=1);
}

void load(int *t,int *n)
{
	int *p;
	for(p=t;p<t+*n;p++)
	{
		printf("give t[%d]",(p-t));
		scanf("%d",p);
	}
}
void display(int *t,int *n)
{
	int *p;
	for(p=t;p<t+*n;p++)
	{
		printf("t[%d]=%d\t|",(p-t),*p);
	}
	printf("\n");
}
int *SEQ(int *t,int *n,int *x)
{
	int *p;
	for (p=t;p<t+*n;p++)
	{
		if(*p==*x)
		{
			return p;
		}
	}
	return NULL;
}
int *MAX(int *t,int *n)
{
	int *max;
	int *p;
	max=t;
	for(p=t+1;p<t+*n;p++)
	{
		if(*p>*max)
		   max=p;
	}
	return max;
}
int ELEMENATE(int *t,int n,int *x)
{
	int *s,*p;
	int aux;
	s=SEQ(t,&n,x);
	do{
	  for(p=s;p<(n+t-1);p++)
	    {
		   	*p=*(p+1);
		  }
	   n--;
	   s=SEQ(t,&n,x);
	   printf("%p\n",s);
	}while(s!=NULL);
	return n;
	
}
int main()
{
	int n,x;
	int *max,*s;
	int *t;
	size_enter(&n);
	t=(int *)(malloc(n*sizeof(int)));
	load(t,&n);
	display(t,&n);
	printf("give the value to search");
	scanf("%d",&x);
	s=SEQ(t,&n,&x);
	if(s!=NULL)
	   printf("the adress of %d is %p\n",x,s);
	else
	   printf("%d not in T\n",x);
	max=MAX(t,&n);
	printf("the adress of the maximum =%d is %p\n",*max,max);
	n=ELEMENATE(t,n,&x);
    t=(int *)(realloc(t,n*sizeof(int)));
	display(t,&n);
	return 0; 
}
