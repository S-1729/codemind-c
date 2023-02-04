#include<stdio.h>
int main()
{
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        int max=-1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>max)
            max=arr[j];
        }
        arr[i]=max;
    }
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}