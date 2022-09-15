#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float s,p,res;
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    p=s*(s-a)*(s-b)*(s-c);
    res=sqrt(p);
    printf("%.2f",res);
}