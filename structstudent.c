//not run
#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char sec;
    char nm;
    float marks;
};
int main()
{
    struct student s1,s2,s3={19,'f',"Isha",99};//static initialisation
    s1.roll=29;
    s1.sec='f';
   strcpy(s1.nm,"ishka");
    s1.marks=99.9;
    printf("input roll,sec,marks for s3");//dynamic initialisation
    scanf("%d%c%f",&s2.roll,&s2.sec,&s2.marks);
    printf("input name");
    gets(s2.nm);
}