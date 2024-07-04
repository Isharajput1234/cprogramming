//To find number is even or odd using pointers
#include<stdio.h>
void oddeven(int*);
int main()

{
    int a,*p;
    printf("input a number");
    scanf("%d",&a);
    p=&a;
    oddeven(p);
    return 0;
}
void oddeven(int*p)
{
    if(*p%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}