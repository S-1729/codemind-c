#include<stdio.h>
int main()
{
    int n,i,j,m,sum=0;;
    scanf("%d%d",&n,&m);
    int arr[100][100];
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
            sum+=arr[i][j];
        }
    }
    printf("%d",sum);
}