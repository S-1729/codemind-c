#include<stdio.h>
int main()
{
    int n,arr[100],k,a=-1,b=-1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(int i=0;i<n/2;i++)
    {
        printf("%d %d ",arr[i],arr[n/2+i]);
    }
}