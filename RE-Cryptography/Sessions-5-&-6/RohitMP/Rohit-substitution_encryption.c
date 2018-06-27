#include<stdio.h>
char subs(char );
void main()
{
    char str[8];
    FILE* input = fopen("/home/rohit/rohit-message-substitution.txt","r");
    FILE* output = fopen("rohit-substitution_ciphertext.txt","w");
    FILE* key = fopen("/home/rohit/VarunKM-key-substitution.txt","r");
    fseek(input,0,2);
    int last = ftell(input);
    fseek(input,0,0);
    while(ftell(input)<last-1)
    {
        char ch;
        fscanf(input,"%c",&ch);
        char check='.';
        while(check!=ch)
        {
            fscanf(key,"%c",&check);
        }
        fseek(key,25,1);
        fscanf(key,"%c",&check);
        fprintf(output,"%c",check);
        fseek(key,0,0);
    }
}

