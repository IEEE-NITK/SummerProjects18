#include<stdio.h>
char subs(char );
void main()
{
    char str[8];
    FILE* input = fopen("/home/rohit/rohit-message-substitution.txt","r");
    FILE* output = fopen("rohit-substitution_ciphertext.txt","w");
    fseek(input,0,2);
    int last = ftell(input);
    fseek(input,0,0);
    while(ftell(input)<last-1)
    {
        char ch;
        fscanf(input,"%c",&ch);
        ch=subs(ch);
        fprintf(output,"%c",ch);
    }
}

char subs(char ch)
{
    switch(ch)
    {
        case 'a':return 'z';
        case 'b':return 'y';
        case 'c':return 'x';
        case 'd':return 'w';
        case 'e':return 'g';
        case 'f':return 'u';
        case 'g':return 't';
        case 'h':return 's';
        case 'i':return 'f';
        case 'j':return 'c';
        case 'k':return 'p';
        case 'l':return 'o';
        case 'm':return 'n';
        case 'n':return 'i';
        case 'o':return 'l';
        case 'p':return 'k';
        case 'q':return 'm';
        case 'r':return 'j';
        case 's':return 'h';
        case 't':return 'v';
        case 'u':return 'r';
        case 'v':return 'e';
        case 'w':return 'd';
        case 'x':return 'q';
        case 'y':return 'b';
        case 'z':return 'a';
    }
}
