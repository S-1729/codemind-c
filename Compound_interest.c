#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r;
    double ci,res;
    scanf("%f %f %f",&p,&r,&t);
    res=1+(0.01*r);
    res=pow(res,t);
    ci=p*res;
    printf("%0.2lf",ci);
}