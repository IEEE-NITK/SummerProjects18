#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{



    FILE *pToFile2 = fopen("vandana-keyfile-substitution.txt", "r");
    char key[100];
    char ch;
    int j = 0;
    while((ch = fgetc(pToFile2)) != EOF)
    {
         key[j++] = ch;

    }
    key[j] = '\0';
    fclose(pToFile2);

    
    
    FILE *pToFile = fopen("vandana-message-substitution.txt", "r");

    char input[100];
    FILE *pToFile1 = fopen("vandana-substitution_cipher.txt", "w");

    while (fgets(input, 100, pToFile))
    {
        for(int i = 0; input[i] != '\n'; i++)
        {
            if (isalpha(input[i]) && islower(input[i]))
            {
                int x = (input[i]-97);
                fputc(key[x], pToFile1);
            }
            else
            {
                fputc(input[i], pToFile1);
            }

        }

        fputc('\n',pToFile1);

    }
    fclose(pToFile);
    fclose(pToFile1);


}
