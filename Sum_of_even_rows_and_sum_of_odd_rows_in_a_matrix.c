#include<stdio.h>
int main()
{
    int n,m,a[100][100],sum1=0,sum2=0,j;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {  
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            if(i%2==0)
            sum1+=a[i][j];
            else
            sum2+=a[i][j];
        }
    }
    printf("%d %d",sum1,sum2);
}