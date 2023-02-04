#include<stdio.h>
int main()
{
    long int n,arr[100],p=1;
    scanf("%ld",&n);
    for(int i=0;i<n;i++)
    scanf("%ld",&arr[i]);
    for(int i=0;i<n;i++)
    {
        p*=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%ld ",p/arr[i]);
    }
}