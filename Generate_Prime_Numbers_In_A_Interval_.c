#include<stdio.h>
#include<math.h>
int isPrime(int i);
int main()
{
    int n,m,i;
    scanf("%d
%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(isPrime(i))
        {
            printf("%d
",i);
        }
    }
}
int isPrime(int i)
{
    if(i==1)
    {
        return 0;
    }
    for(int j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
            return 0;
    }
    return 1;
}