#include<stdio.h>
void main()
{
    int i,l=0;
    printf("Enter the String. \n");
    char S[20];
    gets(S);
    for(i=0;S[i]!='\0';i++)
    {
        l++;
    }
    printf("%d",l);
}
