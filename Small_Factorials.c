#include<stdio.h>
int main()
{
    int t,n,i,j,fact;
    scanf("%d
",&t);
    for(i=0;i<t;i++)
    {
        fact=1;
        scanf("%d
",&n);
        for(j=1;j<=n;j++)
        {
            fact*=j;
        }
        printf("%d
",fact);
    }
}