#include<stdio.h>
int main()
{
    int n,arr[100],i,flag=false;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&k);
    
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            flag=true;
            break;
        }
    }
    if(flag)
    printf("%d",i);
    else
    printf("%d",-1);
}