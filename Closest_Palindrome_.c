#include<stdio.h>
#include<math.h>
int palindrome(int i)
{
    int rev=0,temp=i;
    while(temp>0)
    {
        rev=rev*10+(temp%10);
        temp/=10;
    }
    if(i==rev)
    return 1;
    else
    return 0;
}
int main()
{
    int n,rem1,c=0,x,rem2;
    scanf("%d",&n);
    rem1=1;
    while(1)
    {
        if(palindrome(n+rem1)==1)
            break;
        else
        rem1+=1;
    }
    rem2=1;
    while(1)
    {
        if(palindrome(n-rem2)==1)
        break;
        else
        rem2+=1;
    }
    if(rem1==rem2)
    printf("%d %d",n-rem2,n+rem1);
    else if(rem1<rem2)
    printf("%d",n+rem1);
    else
    printf("%d",n-rem2);
}