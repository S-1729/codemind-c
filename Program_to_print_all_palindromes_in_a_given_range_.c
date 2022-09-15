#include<stdio.h>
int main()
{
    int n,m,i,temp,rem,rev;
    scanf("%d
%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        temp=i;
        rev=0;
        while(temp>0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        if(rev==i)
        {
            printf("%d ",i);
        }
    }
}