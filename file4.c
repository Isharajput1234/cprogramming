//idk
#include<stdio.h>
typedef struct employee
{
    int id;
    int sal;
    char nm[20];
}emp;
int main()
{
    emp e[20];
    int i,n;
    FILE *fp;
    fp=fopen("hello.txt","w");
    if(fp==NULL)
    {
        printf("file error");
    }
    else
    printf("input number of employee");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("input id,salary,name");
       scanf("%d%d%s",&e[i].id,&e[i].sal,e[i].nm);
       fwrite(&e,sizeof(emp),n,fp);
    }
    fclose(fp);
    fp=fopen("hello.txt","r");
    while(fread(&e,sizeof(emp),1,fp))
    {
        if(e[i].sal>50000)
        printf("%s",e[i].nm);
    }
    fclose(fp);
    return 0;
}