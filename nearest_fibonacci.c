#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    c=a+b;
    scanf("%d",&n);
    while(c<=n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if((c-n)<(n-b))
    printf("%d",c);
    else if((c-n)==(n-b))
    printf("%d %d",b,c);
    else
    printf("%d",b);
}