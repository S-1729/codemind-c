#include<stdio.h>
int main()
{
    int i,j,n,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n-1;j++)
        {
            printf(" ");
        }
        for(k=i;k>0;k--)
        {
            printf("%d",k);
        }
        for(l=0;l<i+1;l++)
        {
            printf("%d",l);
        }
        printf("
");
    }
}