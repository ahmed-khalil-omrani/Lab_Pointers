#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	char *name[1];
	char *firstname[1];
	float mean;
}stud;
void fills(stud grp[],int *n)
{
	int i;
	for(i=0;i<*n;i++)
	{
		printf("give the name");
		scanf("%s",&grp[i].name);
		printf("give the firstname");
		scanf("%s",&grp[i].firstname);
		printf("give the mean");
		scanf("%f",&grp[i].mean);
	}
}
/*void print1(stud grp[],int *n)
{
	int i;
	for(i=0;i<*n;i++)
	{
		printf("name = %s",&grp[i].name);
		printf("fname = %s",&grp[i].firstname);
		printf("mean =%f",grp[i].maen);
	}
}*/
void print(stud *st,int n)
{
	stud *p;
	for(p=st;p<n+st;p++)
	{
		printf("name = %s\n",(*p).name);
		printf("fname = %s\n",(*p).firstname);
		printf("mean =%f\n",(*p).mean);
	}
}
void filld(stud *st,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("give the name");
		scanf("%s",(st+i)->name);
		printf("give the firstname");
		scanf("%s",(st+i)->firstname);
		printf("give the mean");
		scanf("%f",&(st+i)->mean);
	}
}
float calcul_avg(stud *st,int *n)
{
	float s;
	int i;
	s=0;
	for(i=0;i<*n;i++)
	{
		s=s+((st+i)->mean);
	}
	return s/(*n);
}
int main()
{
	stud grp[100];
	stud *st;
	float avg;
	int n;
	printf("give the number of student");
	scanf("%d",&n);
	/*fills(grp,&n);*/
	st=(stud *)(malloc(n*sizeof( stud)));
	filld(st,n);
	print(st,n);
	avg=calcul_avg(st,&n);
	printf("the average =%f\n",avg);
}
