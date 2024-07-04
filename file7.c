//pta nhi
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char word[40],longest[40]=" ",shortest[40]=" ";
    fp=fopen("longshort.txt","w");
    if(fp==NULL)
    {
        printf("file error");
    }
    while(fscanf(fp,"39%s",word) !=EOF)
    {
        if(strlen(word)>strlen(longest))
        strcpy(longest,word);
        if(strlen(shortest)==0 || strlen(word)<strlen(shortest))
        strcpy(shortest,word);
    }
    printf("longest file is: %s\n",longest);
    printf("shortest file is: %s\n",shortest);
    fclose(fp);
    return 0;

}