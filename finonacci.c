#include<stdio.h>
int main()
{ 
    int i, x=0,y=1,sum=0,n;
printf("input n");
scanf("%d",&n);
printf("%d",x);
for(i=0;i<n-1;i++)
{
  x=y;
  y=sum;
  sum=x+y;
  printf(" %d",sum);
  
}

 return 0;
}
