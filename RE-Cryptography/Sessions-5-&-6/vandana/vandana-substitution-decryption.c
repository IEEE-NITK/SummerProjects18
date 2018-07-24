#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{



    FILE *pToFile2 = fopen("arpitha-keyfile-substitution.txt", "r");
    char key[100];
    char ch;
    int j = 0;
    while((ch = fgetc(pToFile2)) != EOF)
    {
         key[j++] = ch;

    }
    key[j] = '\0';
    fclose(pToFile2);



    FILE *pToFile = fopen("arpitha-substitution_ciphertext.txt", "r");

    char input[10000];
    FILE *pToFile1 = fopen("vandana-substitution-decrypted.txt", "w");

    while (fgets(input, 10000, pToFile))
    {
        for(int i = 0; input[i] != '\n'; i++)
        {
            if (isalpha(input[i]) && islower(input[i]))
            {
                int k = 0;
               while (k<26)
               {
                   if (input[i] == key[k])
                   {
                        int c = k+97;
                        fputc(c, pToFile1);
                        break;
                   }
                   k++;


               }


            }

            else if ((ch = input[j]) == EOF)
            {
                fclose(pToFile1);
            }


        }

        fputc('\n',pToFile1);

    }
    fclose(pToFile);
    fclose(pToFile1);


}
