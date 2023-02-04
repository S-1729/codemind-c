#include<stdio.h>
int main()
{
    int n,arr[100],t,k;
    scanf("%d",&t);
    for(int l=0;l<t;l++)
    {
        scanf("%d%d",&n,&k);
        for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        for(int i=0;i<k;i++)
        {
            int temp=arr[n-1];
            for(int j=n-1;j>0;j--)
            arr[j]=arr[j-1];
            arr[0]=temp;
        }
        for(int i=0;i<n;i++){
        if(i!=n-1)
        printf("%d ",arr[i]);
        else
        printf("%d
",arr[i]);
        }
    }
}