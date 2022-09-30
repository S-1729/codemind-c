#include<stdio.h>
int main()
{
    int n,m,i,j,sum,arr[10][10];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum+=arr[j][i];
        }
        printf("%d ",sum);
    }
}