#include<stdio.h>
int main()
{
    int n,arr[100],i=0,j,rem;
    scanf("%d",&n);
    while(n>0)
    {
        arr[i++]=n%10;
        n/=10;
    }
    for(j=i-1;j>=0;j--)
    {
        if(arr[j]==6)
        {
        arr[j]=9;
        break;
        }
    }
    for(j=i-1;j>=0;j--)
    printf("%d",arr[j]);
    
}