//to print name and marks of student starting with given letter by user
#include<stdio.h>
#include<string.h>
struct student
{ 
  int marks;
  char nm[20];
};
int main()
{
    struct student ch[20];
    int i,n;
    char f[20];
    printf("input n");
    scanf("%d",&n);
    printf("input first name");
    scanf("%s",&f);
    for(i=0;i<n;i++)
    {
        printf("input name and marks of student%d :",i+1);
        scanf("%d%s",&ch[i].marks,ch[i].nm);
    }
    for(i=0;i<n;i++)
    {
        if(ch[i].nm[0] == f[0]){
        printf("%s%d",ch[i].nm,ch[i].marks);}
    }
    return 0;
}