//sum of table of n numbers
#include <stdio.h>
int main() 
{
    int i,n,temp,sum=0;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        temp=n*i;
        printf("%d*%d=%d\n",n,i,temp);
    }
    return 0;
}