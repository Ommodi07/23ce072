#include <stdio.h>
#include <string.h>
int main()
{
    char names[5][50];
    char temp[50];
    printf("Enter the names of %d students:\n",5);
    for (int i = 0; i < 5; ++i)
    {
        printf("Enter name %d: ", i + 1);
        fflush(stdin);
        gets(names[i]);
    }
    for (int i = 0; i < 5 - 1; ++i)
    {
        for (int j = 0; j < 5 - i - 1; ++j)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    printf("\nSorted names:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%d: %s\n", i + 1, names[i]);
    }
    printf("Code by Om modi 23ce072");
    return 0;
}

