#include<stdio.h>
int main()
{
    int n,arr[100],k=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            if(arr[i]==k)
            k+=1;
            else
            break;
        }
    }
    printf("%d ",k);
}