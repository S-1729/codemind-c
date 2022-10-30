#include<stdio.h>
int main()
{
    int n,arr[100],i,j,r,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
            c++;
        }
        if(c>n/2)
        {
            r=arr[i];
        }
    }
    printf("%d",r);
}