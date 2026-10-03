#include <stdio.h>
#include <string.h>

int main()
{
    char words[5][50];
    char temp[50];

    printf("Enter 5 words:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Word %d: ", i + 1);
        scanf("%49s", words[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(words[i], words[j]) > 0)
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("\nStrings in alphabetical order:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", words[i]);
    }

    return 0;
}
