#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem1,c=0,x,rem2;
    scanf("%d%d",&n,&x);
    int temp=n;
    while(temp>0)
    {
        c++;
        temp/=10;
    }
    int r=pow(10,x);
    rem1=n%r;
    rem2=n/pow(10,c-x);
    printf("%d",abs(rem1-rem2));
}