#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,res,result;
    scanf("%d %d %d",&x,&y,&m);
    res=pow(x,y);
    result=res%m;
    printf("%d",result);
}