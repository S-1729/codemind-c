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
    int n,k,c=0;
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        if(n%k==0)
        {
            if(prime(k)==0)
            c++;
        }
    }
        printf("%d
",c);
}