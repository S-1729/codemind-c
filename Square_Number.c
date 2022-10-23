#include<stdio.h>
#include<math.h>
int isSquare(long i)
{
    int n=sqrt(i);
    if(n*n==i)
    return 1;
    return 0;
}
int main()
{
    long n;
    scanf("%ld",&n);
    if(isSquare(n))
    printf("True");
    else
    printf("False");
    
}