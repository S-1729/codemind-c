#include<stdio.h>
#include<limits.h>
int main()
{
    int n,arr[100],sum=0,maxi=INT_MIN;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]*arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}