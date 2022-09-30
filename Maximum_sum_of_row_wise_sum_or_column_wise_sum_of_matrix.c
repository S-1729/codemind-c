#include<stdio.h>
int main()
{
    int n,m,i,j,sum1=0,sum2=0,max1=0,max2=0,arr[10][10];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        sum1=0;
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
            sum1+=arr[i][j];
        }
        if(sum1>max1)
        max1=sum1;
    }
    for(i=0;i<m;i++)
    {
        sum2=0;
        for(j=0;j<n;j++)
        {
            sum2+=arr[j][i];
        }
        if(sum2>max2)
        max2=sum2;
    }
    if(max1>max2)
    printf("%d",max1);
    else
    printf("%d",max2);
}