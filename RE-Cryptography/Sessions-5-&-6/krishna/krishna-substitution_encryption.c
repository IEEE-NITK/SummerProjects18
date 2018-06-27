#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	FILE *f1,*f2,*f3;
	char message [9],key[26],k;
	int i;
	
	
	f1=fopen("krishna-substitution_cipher.txt","w");
	f2=fopen("message-substitution.txt","r");
	f3=fopen("ll.txt","r");
              i=0;
	for(i=0;i<26;++i)
               key[i]=fgetc(f3);
  
      for(i=0;i<9;++i)
            message[i]=fgetc(f2);
	

    
    for(i=0;i<strlen(message);++i)
    {  int temp = (int)message[i] -97;
        fprintf(f1,"%c",key[temp]);
    }

    fclose(f3);
    fclose(f2);
    fclose(f1);
    return 0;

    
    
}
