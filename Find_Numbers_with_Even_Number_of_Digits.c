#include<stdio.h>
int main()
{
    int n, arr[1000],i,j,c,c1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        c=0;
        while(arr[i]!=0)
        {
            c++;
            arr[i]/=10;
        }
        if(c%2==0)
        c1++;
    }
    printf("%d",c1);
}