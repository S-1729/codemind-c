#include<stdio.h>
int main()
{
    long int n,a[100],b[100],c[100];
    scanf("%ld",&n);
    for(int i=0;i<n;i++)
    scanf("%ld",&a[i]);
    for(int i=0;i<n;i++)
    scanf("%ld",&b[i]);
    
    for(int i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d ",c[i]);
    }
}