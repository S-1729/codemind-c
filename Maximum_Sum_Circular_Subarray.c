#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,arr[100],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    sum+=arr[i];
    }
    int cmax=arr[0],maxs=arr[0],cmin=arr[0],mins=arr[0];
    for(int i=1;i<n;i++){
        cmax=cmax+arr[i]>arr[i]?cmax+arr[i]:arr[i];
        maxs=cmax>maxs?cmax:maxs;
        cmin=cmin+arr[i]<arr[i]?cmin+arr[i]:arr[i];
        mins=cmin<mins?cmin:mins;
    }
    if(mins==sum)
    printf("%d",maxs);
    else
    {
    int r=maxs>sum-mins?maxs:sum-mins;
    printf("%d",r);
    }
}