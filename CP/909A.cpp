//http://codeforces.com/contest/909/submission/38452424
#include<stdio.h>
int main()
{
    char a[11];
    char c,b;
    scanf("%s",a);
    scanf("%c%c",&c,&b);
    printf("%c",a[0]);
    int i=1;
    while(a[i]!=0)
    {
        if(a[i]<b)
        printf("%c",a[i]);
        else
        {printf("%c",b);
        break;}
        i++;
    }
    if(!a[i])
    printf("%c",b);
    return 0;
}
