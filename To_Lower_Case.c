#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]c",s);
    int i;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]+=32;
            printf("%c",s[i]);
        }
        else
        printf("%c",s[i]);
    }
    
}