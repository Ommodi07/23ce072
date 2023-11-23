#include<stdio.h>
void main()
{
    int i,j,l=0,task,e=0;
    char C[20],P[40],S[20];
    printf("Enter the Task number you want to do as follows.\n");
    printf("1. Length of a string. \n");
    printf("2. Reverse string. \n");
    printf("3. Compare two strings. \n");
    printf("4. Copy one string into another string. \n");
    printf("5. Concatenate two strings. \n");
    scanf("%d",&task);
    switch(task)
    {
    case 1:
        printf("Enter the String.\n");
        fflush(stdin);
        gets(S);
        for(i=0;S[i]!='\0';i++)
        {
            l++;
        }
        printf("%d",l);
        break;
    case 2:
        printf("Enter the String.\n");
        fflush(stdin);
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
        break;
    case 3:
        printf("first string = \n");
        fflush(stdin);
        gets(S);
        printf("second string = \n");
        fflush(stdin);
        gets(C);
        i=0;
        while(S[i]==C[i] && (S[i]!='\0' && C[i]!='\0'))
        {
            i++;
        }
        if(S[i]=='\0' && C[i]=='\0')
        {
            printf("Strings are equal");
        }
        else
        {
            printf("Not equal");
        }
        break;
    case 4:
        printf("Enter the String.\n");
        fflush(stdin);
        gets(S);
        for(i=0;S[i]!='\0';i++)
        {
            C[i]=S[i];
        }
        C[i]='\0';
        puts(C);
        break;
    case 5:
        printf("first string = \n");
        fflush(stdin);
        gets(S);
        printf("second string = \n");
        fflush(stdin);
        gets(C);
        for(i=0;S[i]!='\0';i++)
        {
            l++;
        }
        for(i=0;S[i]!='\0';i++)
        {
            P[i]=S[i];
        }
        for(i=0,j=l;C[i]!='\0';j++,i++)
        {
            P[j]=C[i];
        }
        P[j]='\0';
        puts(P);
        break;
    default:
        printf("Invalid .");
        break;
    }
    printf("\nCode by Om modi 23ce072");
}
