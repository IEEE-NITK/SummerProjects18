#include<stdio.h>

void main()
{
    char str[8];
    FILE* input = fopen("/home/rohit/rohit-message-substitution.txt","r");
    FILE* output = fopen("rohit-substitution_ciphertext.txt","w");
    fseek(input,0,2);
    int last = ftell(input);
    printf("%d\n",last);
    fseek(input,0,0);
    while(ftell(input)<last-1)
    {
        char ch;
        fscanf(input,"%c",&ch);
        fprintf(output,"%c",122-(ch-97));
    }
}
