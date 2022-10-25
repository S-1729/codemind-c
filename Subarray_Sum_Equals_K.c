#include<stdio.h>
int main()
{
    int n,k,arr[100],i,j,c=0,sum;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==k)
            {
            c++;
            }
        }
    }
    printf("%d",c);
}