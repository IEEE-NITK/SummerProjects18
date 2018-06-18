#include<stdio.h>
void main()
{
  FILE *m,*c,*k;char ch,ch1;
  int a=0,i=0;
  m=fopen("msg.txt","r");
  c=fopen("vcipher.txt","w");
  k=fopen("key.txt","r");
  while((ch=getc(k))!=EOF)
    a++;
  rewind(k);
  char s[a];
  while((ch=getc(k))!=EOF)
  {
    s[i]=ch;
    i++;
  }
  i=0;
  while((ch=getc(m))!=EOF)
  {
    if(ch>=97 && ch<=122)
    {
      if(i>=a-1)
        i=0;
      int t=(int)(ch+s[i])-96-96;
      if(t<=26)
        ch1=(char)(t+96);
      else
        ch1=(char)(t-26+96);
    i++;
    }
    else
    {
      i=0;
      ch1=ch;
    }
    putc(ch1,c);
  }
  fclose(m);
  fclose(c);
}

