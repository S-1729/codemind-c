#include<stdio.h>
int main()
{
    int n,t1,t2,rev1=0,rev2=0,sq,sq2,rem;
    scanf("%d",&n);
    sq=n*n;
    t1=n;
    while(t1>0)
    {
        rem=t1%10;
        rev1=rev1*10+rem;
        t1=t1/10;
    }
    sq2=rev1*rev1;
    t2=sq2;
    while(t2>0)
    {
        rem=t2%10;
        rev2=rev2*10+rem;
        t2=t2/10;
    }
    if(sq==rev2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}