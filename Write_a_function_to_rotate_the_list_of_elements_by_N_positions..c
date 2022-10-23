#include<stdio.h>
int main()
{
    int n,arr[100],pos,i,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&pos);
    for(i=0;i<pos;i++)
    {
        temp=arr[n-1];
        for(int j=n-1;j>=1;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    
}