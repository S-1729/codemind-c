#include<stdio.h>
#include<math.h>
bool isprime(int n)
{
    int i;
    if(n==1 || n==0)
    return false;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n,i=0,j=0;
    scanf("%d",&n);
    while(true)
    {
        if(isprime(n+i))
        {
            break;
        }
        i+=1;
    }
    while(true)
    {
        if(isprime(n-j))
        {
            break;
        }
        j+=1;
    }
    if(i<j)
    printf("%d",i);
    else
    printf("%d",j);
}