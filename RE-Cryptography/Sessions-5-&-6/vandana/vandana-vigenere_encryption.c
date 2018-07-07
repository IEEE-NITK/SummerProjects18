#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    FILE *pToFile2 = fopen("vandana-keyfile-vigenere.txt", "r");
    char key[100];
    char ch;
    int i = 0;
    while((ch = fgetc(pToFile2)) != EOF)
    {
         key[i++] = ch;

    }
    key[i] = '\0';
    i = i-1;
    printf("%d",i);
    fclose(pToFile2);

    FILE *pToFile = fopen("vandana-message-vigenere.txt", "r");

    char input[600];
    FILE *pToFile1 = fopen("vandana-vigenere_ciphertext.txt", "w");
    int u = 0;
     while (fgets(input, 600, pToFile))
    {
        int j = 0;


        for (; input[j] != '\n'; j++)
        {



            if (isalpha(input[j]) && islower(input[j]))
            {

                int k = u%i;
                int x = (input[j]-97+key[k]-96)%26;

                int y = x+97;


                fputc(y, pToFile1);
                u = k+1;

            }

            else if ((ch = input[j]) == EOF)
            {
                fclose(pToFile1);
            }


            else
            {
                fputc(input[j],pToFile1);

            }
        }

        fputc('\n',pToFile1);
    }


    fclose(pToFile);

}
