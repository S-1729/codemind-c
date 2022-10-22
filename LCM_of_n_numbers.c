#include<stdio.h>
int check(int arr[],int n,int max)
{
    int j;
    for(j=0;j<n;j++)
    {
        if(max%arr[j]!=0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,arr[100],max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    
    while(1)
    {
        if(check(arr,n,max)==1)
        {
            printf("%d",max);
            break;
        }
        else
        max+=1;
    }
}