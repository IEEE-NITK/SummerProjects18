#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int arg0, char* argv[])
{

    if (arg0 != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }

    int k = atoi(argv[1]);

    FILE *pToFile = fopen("arpitha-caesar_ciphertext.txt", "r");

    char input[2000000];
    FILE *pToFile1 = fopen("vandana-caesar_decrypted.txt", "w");

    while (fgets(input, 2000000, pToFile))
    {

        for(int i = 0; input[i] != '\n'; i++)
        {
            
            if (isalpha(input[i]) && islower(input[i]))
            {
                int x = (input[i]-97-k)%26;
                if (x<0)
                {
                    x = x+26;
                }
                int y = x+97;
                fputc(y, pToFile1);
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

    printf("\n");
}
