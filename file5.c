//pura glt hai bhai
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;int n;
    fp=fopen("reverse1.txt","w");
    fseek(fp,-1,2);
    do
    {
        n=ftell(fp);
        ch=fgetc(fp);
        printf("%c",ch);
        fseek(fp,-2,1);
    } while (n!=1);
      return 0;
}