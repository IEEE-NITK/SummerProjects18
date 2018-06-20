#include<stdio.h>

void main()
{
    char str[20];
    FILE* m = fopen("/home/akash/akash-message-substitution.txt","r");
    FILE* c = fopen("akash-substitution_ciphertext.txt","w");
    fseek(m,0,2);
    int size = ftell(m);
    rewind(m);
    FILE* k = fopen("/home/akash/akash-key-substitution.txt","r");
    char key[26];
    for(int i = 0; i < 26; i++){
        key[i] = fgetc(k);
    }
    while(ftell(m)<size-1)
    {
        char ch;
        fscanf(m,"%c",&ch);
        if ((ch >= 'a') && (ch <= 'z')){
            int a = (int)ch - 97;
            fprintf(c,"%c",key[a]);
        }
    }
    fprintf(c,"%c",'\0');
    fclose(c);
    fclose(m);
}