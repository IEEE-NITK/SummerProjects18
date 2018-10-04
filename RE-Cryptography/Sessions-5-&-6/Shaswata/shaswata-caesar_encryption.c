#include<stdio.h>
void main()
{
  FILE *m,*c,*k;char ch,ch1;
  m=fopen("msg.txt","r");
  c=fopen("cipher.txt","w");
  while((ch=getc(m))!=EOF)
  {
    if(ch>=97 && ch<=122)
    {
      if(ch+5<=122||ch+5<=90)
        ch1=ch+5;
      else
        ch1=ch-21;
    }
    else
      ch1=ch;
    putc(ch1,c);  
  }
  fclose(m);
  fclose(c);
}

