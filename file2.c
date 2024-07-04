//segmentation fault
#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    FILE *fp,*fp1;
    //input paragraph
    fp=fopen("isha.txt","w");
    if(fp==NULL)
    {
        printf("file error");
    }
    else
    {
        while((ch==getchar()) !=EOF)
        {
            fputc(ch,fp);
        }

    }
    fclose(fp);
    //copying a paragraph to new file
     fp=fopen("isha.txt","r");
     fp1=fopen("copied,txt","w");
     if(fp==NULL && fp1==NULL)
     {
        printf("file error");
     }
     else
     {
        while((ch==fgetc(fp)) !=EOF)
        fputc(ch,fp1);
     }
     fclose(fp);
     fclose(fp1);
     //display a paragraph,having vowels only
     fp=fopen("isha.txt","r");
     fp1=fopen("copied,txt","r");
     if(fp==NULL && fp1==NULL)
     {
        printf("file error");
     }
     else
     {
        while((ch=fgetc(fp1)) !=EOF)
        {
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            {
                printf("%c",ch);
            }
        }
     }
     fclose(fp1);
    return 0;
 }