#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int l=0;l<t;l++)
    {
        int  n,arr[100],k;
        bool flag=false,s=false;
        
        scanf("%d%d",&n,&k);
        for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=arr[j];
                if(sum==k)
                {
                    flag=true;
                    s=true;
                    printf("%d %d
",i+1,j+1);
                }
                if(sum>k)
                break;
            }
            if(flag)
            break;
        }
    if(!s)
    printf("%d
",-1);
    }
}