#include<stdio.h>
int main()
{
    int n,c1=0,c2=0,count=0,temp,rem;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        rem=temp%10;
        temp/=10;
        count+=1;
        if(rem%2==0)
        {
            c1+=1;
        }
        else
        {
            c2+=1;
        }
    }
    if(count==c1)
    {
        printf("Even");
    }
    else if(count==c2)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
    
}