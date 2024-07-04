//not run
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch,c;
    int i,n,m,pos;
    fp=fopen("position.txt","r");
    printf("input n and m");
    scanf("%d%d", &n,&m);
    printf("input char");
    scanf("%c",&c);
    fseek(fp,m,0);
    for(i=m;i<n;i++)
    {
        ch=fgetc(fp);
        if(ch==c)
        {
            pos=ftell(fp);
            printf("%d",pos-1);
        }
    }

    return 0;
}