#include <stdio.h>  
int main()  
{  
    int num1,num2,max_div, flag = 1;  
    scanf(" %d %d", &num1, &num2);  
    max_div = (num1 > num2) ? num1 : num2;  
    while (flag)  
    {  
        if (max_div % num1 == 0 && max_div % num2 == 0)  
        {  
            printf( "%d",max_div);  
            break;  
        }  
        ++max_div;
    }
    return 0;
}