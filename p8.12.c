#include<stdio.h>
void main()
{
    int i,e=0,l=0;
    char S[20],C[20];
    gets(S);
    for(i=0;S[i]!=0;i++)
    {
        l++;
    }
    e=l-1;
    for(i=0;i<l;i++)
    {
     C[e]=S[i];
     e--;
    }
    C[e]='\0';
    puts(C);
}
