#include<stdio.h>
int main()
{
    int n,m,a[100][100],sum=0,s=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {  
        for(int j=0;j<m;j++)
        {
            if(i!=0&&i!=n-1&&j!=0&&j!=m-1)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d",sum);
}