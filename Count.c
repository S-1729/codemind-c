#include<stdio.h>
int main()
{
    int n,i,sum1=0,sum2=0;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
            if(arr[i]%2==0)
            sum1+=1;
            else
            sum2+=1;
    }
    printf("%d %d",sum1,sum2);
}