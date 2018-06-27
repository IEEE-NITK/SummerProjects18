#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    FILE *fp1,*fp2,*fp3;
    char key[27],msg[8],ct[8];
    int i;
    fp1 = fopen(argv[1],"r");
    fp2 = fopen(argv[2], "r");
    fp3 = fopen(argv[3], "w");
    fscanf(fp1, " %s", msg);
    fscanf(fp2, " %s", key);
    fclose(fp1);
    fclose(fp2);
    for (i=0; msg[i]!='\0';i++)
        if (msg[i]>='a' && msg[i]<='z')
            ct[i]=key[msg[i]-97];
        else
            ct[i]=msg[i];
    ct[i]='\0';
    fprintf(fp3, "%s", ct);
    fclose(fp3);
}