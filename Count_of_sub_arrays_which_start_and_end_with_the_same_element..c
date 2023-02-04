#include<stdio.h>
int main()
{
    int n,arr[100],c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]==arr[j])c++;
        }
    }
    printf("%d",c);
}