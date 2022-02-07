#include<stdio.h>
int main()
{
    int i,n,rev=0,remainder;
    scanf("%d",&n);
    while(n!=0){
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
    }
    printf("%d",rev);
}