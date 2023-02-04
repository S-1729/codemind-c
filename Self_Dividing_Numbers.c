#include<stdio.h>
int SDN(int n)
{
    int c=0,c1=0,temp=n;
    while(n>0)
    {
        c++;
        int rem=n%10;
        n=n/10;
        if(rem==0 || temp%rem!=0)
        return false;
    }
    return true;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(SDN(i))
        printf("%d ",i);
    }
}