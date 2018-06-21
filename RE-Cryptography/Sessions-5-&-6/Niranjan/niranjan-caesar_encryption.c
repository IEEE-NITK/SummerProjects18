#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
 
 
int encode (int, int);
 
 
int encode(int ch, int key) { 
    if (ch>=97 && ch<=122) {
         ch = (ch-'a' + key) % 26 + 'a';
         ch += (ch < 'a') ? 26 : 0;
    }
    
    return ch;
}
int main (void) 
{
    FILE *f1;
    FILE *f2;
    char ch;
    int key;
 
 
    f1 = fopen("message.txt","r");  
 
    f2 = fopen("niranjan-caesar_ciphertext.txt","w");
     
    printf("\n Enter key");
    scanf("%d", &key);
    char enc;
     
    while( ( ch = fgetc(f1) ) != EOF )
    { 
        enc=encode(ch, key);
        putc(enc,f2);
    }
    fclose(f2);
    fclose(f1);
     
    return 0;
}
