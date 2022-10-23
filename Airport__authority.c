#include<stdio.h>
int main()
{
    int n,arr[100],t,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=t)
        sum+=1;
        else
        sum+=2;
    }
    printf("%d",sum);
}