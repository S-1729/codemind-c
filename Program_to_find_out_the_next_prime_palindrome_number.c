#include<stdio.h>
#include<math.h>
int isprime(int i)
{
    if(i==1 || i==0)
    return 0;
    for(int j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
        return 0;
    }
    return 1;
}
int ispalindrome(int i)
{
    int temp=i,rev=0;
    while(temp>0)
    {
        rev=rev*10+(temp%10);
        temp/=10;
    }
    if(i==rev)
    return 1;
    return 0;
}
int main()
{
    int n,inc=1;
    scanf("%d",&n);
    while(true)
    {
        if(isprime(n+inc) && ispalindrome(n+inc))
        {
            printf("%d",n+inc);
            break;
        }
        else
        inc++;
    }
}