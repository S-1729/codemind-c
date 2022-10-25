#include<stdio.h>
int main()
{
    int t,n,i,j,sum,arr[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=0;
        scanf("%d",&n);
        for(j=0;j<n-1;j++)
        scanf("%d",&arr[j]);
        sum=(n*(n+1))/2;
        for(j=0;j<n-1;j++)
        sum-=arr[j];
        printf("%d
",sum);
    }
    
    
}