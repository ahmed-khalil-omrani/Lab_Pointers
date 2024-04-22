#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include"Ex 7.h"

int main() {
    complex c1,c4;
    complex *c2;
    complex *c3;
    c2=(complex *)(malloc(sizeof(complex)));
    c3=(complex *)(malloc(sizeof(complex)));
    c1=Fill();
    c2=Fill2();
    c3=Sum(c1,*c2);
    c4=Sum1(&c1,c2);
    printf("the sum of c1 and c2 is sum->reel=%f sum->immg=%f\n",c3->reel,c3->immg);
    printf("the sum of c1 and c2 is sum->reel=%f sum->immg=%f",c4.reel,c4.immg);
    free(c2);
    c2=NULL;
    free(c3);
    c3=NULL;
    return 0;
}
