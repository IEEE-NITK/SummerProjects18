#include<stdio.h>

void main()
{
    FILE* input = fopen("/home/rohit/SummerProjects18/RE-Cryptography/Sessions-5-&-6/VarunKM/VarunKM-substitution_ciphertext.txt","r");
    FILE* output = fopen("rohit-substitution_decrypted.txt","w");
    FILE* key = fopen("/home/rohit/VarunKM-key-substitution.txt","r");
    int i=0;
    while(i<7)
    {
        char ch;
        fscanf(input,"%c",&ch);
        char check =',';
        while(check!=ch)
        {
            fscanf(key,"%c",&check);
        }
        fseek(key,25,1);
        fscanf(key,"%c",&check);
        fprintf(output,"%c",check);
        fseek(key,0,0);
        i++;
    }
}
