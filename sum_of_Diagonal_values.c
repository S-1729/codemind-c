#include<stdio.h>
int main()
{
    int n,m,i,j,sum=0,arr[10][10];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j or i+j==n-1)
            {
                sum+=arr[i][j];
            }
        }
    }
    printf("%d",sum);
}