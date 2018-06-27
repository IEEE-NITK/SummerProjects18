#include<stdio.h>

void main()
{
    char str[20];
    FILE* c = fopen("/home/akash/SummerProjects18/RE-Cryptography/Sessions-5-&-6/Saurabh/saurabh-substitution_ciphertext.txt","r");
    FILE* d = fopen("akash-decrypt-substitution.txt","w");
    fseek(c,0,2);
    int size = ftell(c);
    rewind(c);
    FILE* k = fopen("/home/akash/Downloads/saurabh-substitution_key.txt","r");
    char key[26];
    for(int i = 0; i < 26; i++){
        key[i] = fgetc(k);
    }
    while(ftell(c)<size-1)
    {
        char ch;
        fscanf(c,"%c",&ch);
        if ((ch >= 'a') && (ch <= 'z')){
            int j;
            char cc=ch;
            for(j=0; cc!=key[j]; j++);
            ch=97+j;
            fprintf(d,"%c",ch);
        }
    }
    fclose(c);
    fclose(d);
    fclose(k);
}