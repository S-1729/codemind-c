#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,arr[100],c=0,nonzeros[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        if(arr[i]==0)
        printf("%d ",0);
        else
        nonzeros[c++]=arr[i];
    }
    for(int i=0;i<c;i++)
    printf("%d ",nonzeros[i]);
}