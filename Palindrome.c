#include<stdio.h>
int main()
{
    int n,rev=0,original,remainder;
    scanf("%d",&n);
    original=n;
    while(n!=0){
    remainder=n%10;
    rev=rev*10+remainder;
    n/=10;
        
    }
    if(original==rev)
    printf("True");
    else
    printf("False");
}