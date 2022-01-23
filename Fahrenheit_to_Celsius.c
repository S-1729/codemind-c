#include<stdio.h>
int main()
{
    double fh,c;
    scanf("%lf",&fh);
    c = ((fh - 32) *5)/9;
    printf("%.2lf",c);
}