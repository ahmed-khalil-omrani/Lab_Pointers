//
// Created by ASUS on 01/03/2024.
//
typedef struct
{
    float reel;
    float immg;
}complex;
#ifndef EX_7_EX_7_H
#define EX_7_EX_7_H
complex Fill()
{
    complex c1;
    printf("give the reel part of c1");
    scanf("%f",&c1.reel);
    printf("give the immege part of c1");
    scanf("%f",&c1.immg);
    return c1;
}
complex *Fill2()
{
    complex *c2;
    c2=(complex *)(malloc(sizeof(complex)));
    printf("give the reel part of c2");
    scanf("%f",&c2->reel);
    printf("give the immege part of c2");
    scanf("%f",&c2->immg);
    return c2;
}
complex *Sum(complex c1,complex c2)
{
    complex *res;
    res=(complex *)(malloc(sizeof(complex)));
    res->reel=c1.reel+c2.reel;
    res->immg=c1.immg+c2.immg;
    return res;
}
complex Sum1(complex *c1,complex *c2)
{
    complex res;
    res.reel=c1->reel+c2->reel;
    res.immg=c1->immg+c2->immg;
    return res;
}
#endif //EX_7_EX_7_H
