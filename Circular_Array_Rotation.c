#include<stdio.h>
int main()
{
    int n,i,temp,q,k,arr[100];
    scanf("%d%d%d",&n,&k,&q);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<k;i++)
    {
        temp=arr[n-1];
        for(int j=n-1;j>=1;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    for(int l=0;l<q;l++)
    {
        int m;
        scanf("%d",&m);
        printf("%d
",arr[m]);
    }
}