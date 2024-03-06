//To check weather number is prime or not using pointers2

#include<stdio.h>
int main()
{
    int a,*p,i,count=0;
printf("input the number");
scanf("%d",&a);
p=&a;
for(i=1;i<=a;i++)
{
if(*p%i==0)
count++;
}
if(count==2)
{
    printf("prime");
}
else{
    printf("not prime");
}


return 0;
}