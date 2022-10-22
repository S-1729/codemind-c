#include<stdio.h>
#include<math.h>
int prime(int i)
{
    if(i==1 || i==0)
    return 0;
    int result=sqrt(i),j;
    for(j=2;j<=result;j++)
    {
        if(i%j==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n,rem1,flag=0;
    scanf("%d",&n);
    if(prime(n))
    {
        while(n>0)
        {
            rem1=n%10;
            n/=10;
            if(prime(rem1)==0)
            {
                printf("Not Mega Prime
");
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("Mega Prime");
    }
    else
    printf("Not Mega Prime
");
}