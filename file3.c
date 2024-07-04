//error 
#include<stdio.h>
int main()
{
    int ce=0,co=0,num,n;
    FILE *fp,*fe,*fo;
    fp=fopen("number.txt","w");
    if(fp==NULL)
    {
        printf("file error");
    }
    else
    {
        printf("input number to be store");
        scanf("%d",&n);
        for(int i=1;i<n;i++)
        {
            scanf("%d",&num);
            putw(num,fp);
        }   
    }
    fclose(fp);
    fp=fopen("number.txt","r");
    fe=fopen("even.txt","w");
    fo=fopen("odd.txt","w");
    if(fp==NULL || fe==NULL || fo==NULL)
    {
        printf("file error");
    }
    else
    for( int i=1;i<n;i++)
    {
        num=getw(fp);
        if(num%2==0)
        {
            putw(num,fe);
            ce++;
        }
        else
        {
            putw(num,fo);
            co++;
        }
    }
    fclose(fp);
    fclose(fe);
    fclose(fo);
    fe=fopen("even.txt","r");
    if(fe==NULL)
    {
        printf("file error");
    }
    else
    for( int i=1;i<n;i++)
    {
        num=getw(fe);
        printf("%d",num);
    }
    fclose(fe);
    return 0;
}