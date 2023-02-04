#include<stdio.h>
int main()
{
    long int n,arr[100],k,a=-1,b=-1;
    scanf("%ld",&n);
    for(int i=0;i<n;i++)
    scanf("%ld",&arr[i]);
    scanf("%ld",&k);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k && a==-1)
        a=i;
        if(arr[i]==k)
        b=i;
    }
    printf("%ld %ld
",a,b);
}