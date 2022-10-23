#include<stdio.h>
int main()
{
    int n,a[100],b[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(i<n/2)
        b[i]=a[n-i-1];
        else
        b[i]=a[i-n/2];
    }
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
}