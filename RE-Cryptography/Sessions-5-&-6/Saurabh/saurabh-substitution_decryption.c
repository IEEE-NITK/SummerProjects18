#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    FILE *fp1,*fp2,*fp3;
    char key[27],msg[15],ct[15];
    int i,j;
    fp1 = fopen(argv[1],"r");
    fp2 = fopen(argv[2], "r");
    fp3 = fopen(argv[3], "w");
    fscanf(fp1, " %s", ct);
    fscanf(fp2, " %s", key);
    fclose(fp1);
    fclose(fp2);
    for (i=0; ct[i]!='\0'; i++)
        if (ct[i]>='a' && ct[i]<='z')
        {
            for (j=0; ct[i]!=key[j]; j++);
            msg[i]=97+j;
        }
        else
            msg[i]=ct[i];
    msg[i]='\0';
    fprintf(fp3, "%s", msg);
    fclose(fp3);
}