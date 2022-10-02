#include<stdio.h>
#include<math.h>
int isPrime(int i);
int main()
{
    int i,n,m,c=0;
    scanf("%d
%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(isPrime(i))
        {
        c+=1;
        }
    }
    printf("%d",c);
}

int isPrime(int i)
{
    int j;
    bool f=0,t=1;
    int res=sqrt(i);
    if(i==1)
    {
    return f;
    }
    
    for(j=2;j<=res;j++)
    {
        if(i%j==0)
        {
        return f;
        }
    }
    return t;
}