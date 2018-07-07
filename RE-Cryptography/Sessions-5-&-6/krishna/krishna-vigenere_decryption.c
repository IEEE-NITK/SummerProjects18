#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *f1,*f2,*f3;
	f1=fopen("akash-vigenere_ciphertext.txt","r");
	f2=fopen("akash-key-vigenere.txt","r");
	f3=fopen("krishna-vigenere_decode.txt","w");
	fseek(f2,0,2);
	int key_size=ftell(f2),t;
	fseek(f2,0,0);
	char m,k;
	while((m=fgetc(f1))!=EOF)
	{
       
      if(isalpha(m))
        {  if(ftell(f2)==key_size-1)
       fseek(f2,0,0);
      k=fgetc(f2);

        	
           t=(97+((m-k)+26)%26);
              
           
         }
         else
         	{
                  t=m;
                  
                  }
      fprintf(f3,"%c",t);

         
	}
	fclose(f3);
	fclose(f2);
	fclose(f1);
  return 0;
}
