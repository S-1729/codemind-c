#include<stdio.h>
#include<math.h>
int prime(int i)
{
    if(i==1 || i==0)
    return 0;
    int result=sqrt(i),j;
    for(j=2;j<=result;j++)
    {
        if(i%j==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n,rem1,k,rem2,t;
        scanf("%d",&n);
        rem1=0;
        while(1)
        {
            if(prime(n+rem1)==1)
            break;
            else
            rem1+=1;
        }
        rem2=0;
        while(1)
        {
            if(prime(n-rem2)==1)
            break;
            else
            rem2+=1;
        }
        if(rem1==rem2)
        printf("%d
",rem1);
        else if(rem1<rem2)
        printf("%d
",rem1);
        else
        printf("%d
",rem2);
    
}