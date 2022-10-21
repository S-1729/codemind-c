#include<stdio.h>
int main()
{
    int n,i,j,sum1=0,sum2=0;
    scanf("%d",&n);
    int arr[100][100];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
            sum1+=arr[i][j];
            }
            if(i+j==n-1)
            {
            sum2+=arr[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
Secondary Diagonal:%d",sum1,sum2);
}