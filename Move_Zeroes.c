#include<stdio.h>
int main()
{
    int n,arr[100],zeros[100],nonzeros[100];
    scanf("%d",&n);
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        if(arr[i]==0)
        zeros[c1++]=0;
        else
        nonzeros[c2++]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i<c2)
        printf("%d ",nonzeros[i]);
        else
        printf("%d ",zeros[c3++]);
    }
}