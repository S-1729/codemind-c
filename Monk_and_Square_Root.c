#include<stdio.h>
int main()
{
    long int t,i,n,m,k,j;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        k=-1;
        scanf("%ld%ld",&n,&m);
        for(j=0;j<m;j++)
        {
         if((j*j) % m==n )
         {
             k=j;
             break;
         }
        }
    printf("%ld
",k);
    }
}