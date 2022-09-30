#include<stdio.h>
int main()
{
    int n,m,a[100][100],b[100][100],c[100][100],j;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {  
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   for(int i=0;i<n;i++)
    {  
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {  
        for(int j=0;j<n;j++)
        {
            if(a[i][j]>b[i][j])
            c[i][j]=a[i][j]-b[i][j];
            else
            c[i][j]=b[i][j]-a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {  
        for(j=0;j<n-1;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("%d",c[i][j]);
        printf("
");
    }
}