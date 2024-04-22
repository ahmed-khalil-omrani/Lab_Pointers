#include<stdio.h>
#include<stdlib.h>
void scan(int *x)
{
	do
	{
		printf("give the size");
		scanf("%d",x);
	}while(*x<=0);
}
void read(int *t,int n)
{
	int *p;
	for(p=t;p<(t+n);p++)
	{
		printf("enter t[%d]",p-t);
		scanf("%d",p);
	}
}
/*void transfer(int *a,int *b,int n,int m)
{
	int i;
	a=(int *)(realloc(a,m*sizeof(int)));
	printf("size :%d",sizeof(a));
	for(i=(n-1);i<n+m;i++)
	{
		*(a+i)=*(b+(i-n-1));
	}
}*/
/*void transfer(int *a,int *b,int n,int m)
{
	int *pa;
	int *pb;
	for(pa=a;pa<(a+m);pa++)
	{
		(pb)=(pa+(n));
		*(pb)=*(b+(pa-a));
	}

}*/
void transfer(int *a,int *b,int n,int m)
{
	int *pa=a;
	int *pb=b;
	for(pb=b , pa=a;pa<(pa+n+m);pa++)
	{
		*(pa)=*(pb);
		pb++;
	}

}
void print(int *a,int n)
{
	int *p;
	for (p=a;p<a+n;p++)
	{
		printf("t[%d]=%d of addr=%p\n",p-a,*p,p);
	}
}
int main()
{
	int *a;
	int *b;
	int n,m;
	scan(&n);
	scan(&m);
	a=(int *)(malloc(n*sizeof(int)));
	b=(int *)(malloc(m*sizeof(int)));
	printf("size :%d",sizeof(a));
	read(a,n);
	read(b,m);
	a=(int *)(realloc(a,m*sizeof(int)));
	transfer(a,b,n,m);
	print(a,n+m);
	free(b);
	*b=NULL;
	return 0;
}
