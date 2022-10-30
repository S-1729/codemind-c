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
bool ispalindrome(int n)
{
    int temp=n,rev=0;
    while(n>0)
    {
        rev=rev*10+(n%10);
        n/=10;
    }
    if(rev==temp)
    return true;
    return false;
}
int main()
{
    int n,i=0;
    scanf("%d",&n);
    while(true)
    {
        i+=1;
        if(isprime(n+i) && ispalindrome(n+i))
        {
            printf("%d",n+i);
            break;
        }
    }
}