#include<stdio.h>
int main()
{
    int n,i,m,j,sum1=0,sum2=0,max;
    scanf("%d%d",&n,&m);
    int arr[100][100];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        max=arr[0][i];
        for(j=0;j<n;j++)
        {
            if(arr[j][i]>max)
            {
                max=arr[j][i];
            }
        }
        printf("%d
",max);
    }
}