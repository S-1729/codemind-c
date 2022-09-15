#include<stdio.h>
int main()
{
    int n,t,temp,i,rem,rev;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        temp=n;
        rev=0;
        while(temp>0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        if(rev==n)
        {
            printf("True
");
        }
        else{
            printf("False
");
        }
    }
}