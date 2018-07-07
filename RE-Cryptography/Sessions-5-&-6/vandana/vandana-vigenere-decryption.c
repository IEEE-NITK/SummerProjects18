#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    FILE *pToFile2 = fopen("arpitha-keyfile-vigenere.txt", "r");
    char key[100];
    char ch;
    int i = 0;
    while((ch = fgetc(pToFile2)) != EOF)
    {
         key[i++] = ch;

    }
    key[i] = '\0';
    fclose(pToFile2);

    FILE *pToFile = fopen("arpitha-vigenere_ciphertext.txt", "r");

    char input[600];
    FILE *pToFile1 = fopen("vandana-vigenere-decrypted.txt", "w");
    int u = 0;
     while (fgets(input, 600, pToFile))
    {
        int j = 0;


        for (; input[j] != '\n'; j++)
        {

            if (isalpha(input[j]) && islower(input[j]))
            {

                int k = u%i;
                int z = ((input[j]-97)-(key[k]-96));
                if (z<0)
                {
                    z = z+26;
                }

                int x = (z)%26;

                int y = x+97;
                u = k+1;

                fputc(y, pToFile1);

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
