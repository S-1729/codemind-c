#include<stdio.h>
int main()
{
    int n;
    long int arr[100],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    scanf("%ld",&arr[i]);
    sum+=arr[i];
    }
    printf("%ld",sum);
}