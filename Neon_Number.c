#include<stdio.h> 
int main() 
{ 
  int n,rem,sq=0,sd=0;  
  scanf("%d",&n); 
  sq=n*n; 
  while(sq!=0) 
  {
    rem=sq%10;
    sd=sd+rem;
    sq=sq/10;
  }
  if(sd==n)
  { 
    printf("Neon Number");
  }
  else
  {
    printf("Not Neon Number");
  }
}