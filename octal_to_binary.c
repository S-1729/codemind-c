#include<stdio.h>
#include<math.h>
int main()
{
    long octal,place=1,dec=0,rem,reminder,binary=0,weight=1;
    scanf("%ld",&octal);
    while(octal)
    {
        rem=octal%10;
        dec+=rem*place;
        octal/=10;
        place=place*8;
    }
    while(dec>0)
    {
        reminder=dec%2;
        binary=binary+(reminder*weight);
        dec/=2;
        weight=weight*10;
    }
    printf("%ld",binary);
    
}