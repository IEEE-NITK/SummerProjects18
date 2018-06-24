#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *f1,*f2;
	char k;
	 int key;
	f1 = fopen("krishna-message.txt","r");
	f2 =fopen("krishna_ceaser_cipher.txt","w");
	printf("\nenter the key\n");
	scanf("%d",&key);

	while((k=fgetc(f1))!=EOF)
	{    
          if(isalpha(k))
		  { k=tolower(k);
                       k+=key;
                        if(k>'z')
                            k=k-'z'+'a'-1;
		
			
		
		putc(k,f2);
	           }
	      if(k==' ')
	      	putc(' ',f2);

	}

	fclose(f1);
	fclose(f2);
	return 0;

}
