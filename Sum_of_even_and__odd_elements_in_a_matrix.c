#include<stdio.h>
int main()
{
    int n,m,arr[100][100],even=0,odd=0,i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {  
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]%2==0)
            even+=arr[i][j];
            else
            odd+=arr[i][j];
        }
    }
    printf("%d %d",even,odd);
 
}