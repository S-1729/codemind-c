#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        int n,arr[100],count=0;
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        scanf("%d",&arr[j]);
        for(int a=0;a<n;a++){
            for(int b=a+1;b<n;b++){
                for(int c=0;c<n;c++)
                {
                    if(arr[a]+arr[b]==arr[c])
                    count++;
                }
            }
        }
        if(count==0)
        printf("%d
",-1);
        else
        printf("%d
",count);
    }
}