#include<stdio.h>
#include<limits.h>
int main()
{
    int n,arr[100],sum=0,maxi=INT_MIN;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>maxi)
        maxi=sum;
        if(sum<0)
        sum=0;
    }
    printf("%d
",maxi);
}