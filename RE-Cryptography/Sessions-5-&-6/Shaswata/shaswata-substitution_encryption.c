#include<stdio.h>
void main()
{
  FILE *m,*c,*k;char ch,ch1;
  int a=0,i=0;
  m=fopen("msg1.txt","r");
  c=fopen("scipher.txt","w");
  i=0;
  while((ch=getc(m))!=EOF)
  {
    int t=(int)ch;
    if(ch>=97 && ch<=122)
    {
        ch1=(char)(122+1+96-t);
    }
    else
    {
      ch1=ch;
    }
    putc(ch1,c);
  }
  fclose(m);
  fclose(c);
}
                   
