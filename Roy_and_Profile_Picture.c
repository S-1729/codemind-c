#include<stdio.h>
#include<math.h>
int main()
{
    int l,n,i,w,h;
    scanf("%d
%d",&l,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d
",&w,&h);
        if(w<l or h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        if(w>=l and h>=l)
        {
            if(w==h)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
    }
}