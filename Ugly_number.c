#include<stdio.h>
int main()
{
    int n,i,arr[3]={2,3,5};
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
        while(n%arr[i]==0)
        n/=arr[i];
    }
    if(n==1)
    printf("Ugly Number");
    else
    printf("Not Ugly Number");
}