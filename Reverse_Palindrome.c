#include<stdio.h>
int ispalindrome(int m)
{
    int t1=m,r1=0;
    while(t1>0)
    {
        r1=r1*10+(t1%10);
        t1/=10;
    }
    if(r1==m)
    return 1;
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(true)
    {
        int temp=n,rev=0;
        while(temp>0)
        {
            rev=rev*10+(temp%10);
            temp/=10;
        }
        int sum=n+rev;
        if(ispalindrome(sum))
        {
            printf("%d",sum);
            break;
        }
        else
        {
            n=sum;
        }
        
    }
}