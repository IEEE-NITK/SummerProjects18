#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    FILE *fp1,*fp2,*fp3;
    char c;
    int w;
    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "r");
    fp3 = fopen(argv[3], "w");
    fscanf(fp2, "%d", &w);
    w=w%26;
    fclose(fp2);
    while (fscanf(fp1, "%c", &c) != EOF)
    {
        if (c>='a' && c<='z')
        {
            if (c+w>='a' && c+w<='z')
                fprintf(fp3, "%c", c+w);
            else if(c+w>'z')
		fprintf(fp3, "%c", c+w-26);
            else if(c+w<'a')
		fprintf(fp3, "%c", c+w+26);
        }
	else
		fprintf(fp3, "%c", c);
    }
    fclose(fp1);
    fclose(fp3);
}
