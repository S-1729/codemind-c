#include<stdio.h>
int main()
{
    float num;
    scanf("%f",&num);
    if(num<=0){
        if(num==0)
        printf("Zero");
        else
        printf("Negative Number");
    }
    else
    printf("Positive Number");
}