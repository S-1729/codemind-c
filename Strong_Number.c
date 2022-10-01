#include<stdio.h>
int main()
{
    int n,sum=0,fact,i,rem,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        n/=10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact*=i;
        }
        sum+=fact;
    }
    if(sum==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}