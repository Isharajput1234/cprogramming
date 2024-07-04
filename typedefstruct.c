//to print marks sum only between 0 to 100
#include<stdio.h>
typedef struct student
{
    char nm[40];
    int rollno;
    float m1,m2,m3;
}stur;
int main()
{
    stur ch[40];
    int i;
    float marks;
    printf("input name,rollno,marks");
    for(i=0;i<3;i++)
    {
        scanf("%s%d%f%f%f",ch[i].nm,&ch[i].rollno,&ch[i].m1,&ch[i].m2,&ch[i].m3);
    }
    for(i=0;i<3;i++)
    {
    if(ch[i].m1 && ch[i].m2 && ch[i].m3<=100 && ch[i].m1 && ch[i].m2 && ch[i].m3>0 )
    {
     marks=ch[i].m1+ch[i].m2+ch[i].m1;
     printf("%s%d%f",ch[i].nm,ch[i].rollno,marks);
    }
    else{
    printf("marks are incorrect");
    }
    }
return 0;
}





//to print sum of marks of students
// #include<stdio.h>
// typedef struct student
// {
//     char nm[40];
//     int rollno;
//     float m1,m2,m3;
// }stur;
// int main()
// {
//     stur ch[40];
//     int i;
//     float marks;
//     printf("input name,rollno,marks");
//     for(i=0;i<3;i++)
//     {
//         scanf("%s%d%f%f%f",ch[i].nm,&ch[i].rollno,&ch[i].m1,&ch[i].m2,&ch[i].m3);
//     }
//     if(ch[i].m1 && ch[i].m2 && ch[i].m3<=100 && ch[i].m1 && ch[i].m2 && ch[i].m3>0 ){
//     for(i=0;i<3;i++)
//     {
//      marks=ch[i].m1+ch[i].m2+ch[i].m1;
    
//     printf("%s%d%f",ch[i].nm,ch[i].rollno,marks);
// }
//     }
//     else{
//     printf("marks are incorrect");
//     }
// return 0;
// }

