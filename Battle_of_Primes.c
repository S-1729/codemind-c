#include<stdio.h>
#include<math.h>
bool isprime(int n)
{
    int i;
    if(n==1 || n==0)
    return false;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n1,n2,i=0;
    scanf("%d%d",&n1,&n2);
    while(true)
    {
        i+=1;
        if(isprime(n1+n2+i))
        {
            printf("%d",i);
            break;
        }
    }
}