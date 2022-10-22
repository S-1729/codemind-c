#include<stdio.h>
int main()
{
    int n,i,j,c,c1=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==9)
        {
        printf("%d ",i);
        c1++;
        }
    }
    printf("
Total=%d",c1);
}