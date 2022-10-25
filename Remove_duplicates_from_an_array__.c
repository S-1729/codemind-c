#include<stdio.h>
int main()
{
    int n,arr[100],i,j,visited;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        visited=-1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
            arr[j]=visited;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=-1)
        printf("%d ",arr[i]);
    }
}