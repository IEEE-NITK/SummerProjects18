#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char *argv[])
{
	FILE *fp1,*fp2,*fp3;
	int l,k,i,j;
	char c,word[15],key[10],cip[15];
	fp1 = fopen(argv[1], "r");
	fp2 = fopen(argv[2], "r");	
	fp3 = fopen(argv[3], "w");
	fscanf(fp2, " %s", key);
	fclose(fp2);	
	k=strlen(key);
	while (feof(fp1)==0)
	{
		fscanf(fp1, " %s", word);
		l=strlen(word);
		if (l==k)
		{
			for (i=0;i<l;i++)
			{
				c=word[i]+key[i]-192;
				if (c>26)
					c=c%26;
				cip[i]=c;
			}
			fprintf(fp3, "%s ", cip);
		}
		else if (l>k)
		{
			for (i=0;i<l;i++,j++)
			{
				if (j==k)
					j=0;
				c=word[i]+key[j]-192;
				if (c>26)
					c=c%26;
				cip[i]=c;
			}
			fprintf(fp3, "%s ", cip);
		}
		else
		{
			for (i=0;i<l;i++)
			{
				c=word[i]+key[i]-192;
				if (c>26)
					c=c%26;
				cip[i]=c;
			}
			fprintf(fp3, "%s ", cip);
		}
	}
	fclose(fp1);
	fclose(fp3);
}			
