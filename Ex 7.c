#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int immg;
	float reel;
} complex;
complex fill()
{
	complex c;
	printf("give the Reel");
	scanf("%f",&c.reel);
	printf("give the Immg");
	scanf("%d",&c.immg);
	return c;
}
complex *complex_fill()
{
	complex *c;
	c=(complex *)(malloc(sizeof(complex)));
	printf("give the Reel");
	scanf("%f",&c->reel);
	printf("give the Immg");
	scanf("%d",&c->immg);
	return c;
}
complex *sum(complex c1,complex *c2)
{
	complex *su;
	su=(complex *)(malloc(sizeof(complex)));
	su->reel=c1.reel+c2->reel;
	su->immg=c1.immg+c2->immg;
	return su;
	
}
complex sum1(complex *c1,complex *c2)
{
	complex su;
	su.reel=c1->reel+c2->reel;
	su.immg=c1->immg+c2->immg;
	return su;
}
int main()
{
	complex c1,su;
	complex *c2;
	complex *s;
	c1=fill();
	c2=complex_fill();
	s=sum(c1,c2);
	su=sum1(&c1,c2);
	printf("sum->reel=%f \tsum->immg=%d \n",s->reel,s->immg );
	printf("sum1->reel=%f \tsum1->immg=%d ",s->reel,s->immg );
	free(c2);
	free(s);
}
