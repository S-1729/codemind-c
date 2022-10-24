#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=0,b=1,c;
    scanf("%d",&n);
    c=a+b;
    while(c<=n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(abs(n-c)<abs(n-b))
    printf("%d ",c);
    else if(abs(n-c)==abs(n-b))
    printf("%d %d",b,c);
    else
    printf("%d",b);
}