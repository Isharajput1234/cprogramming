//prime using functions
#include<stdio.h>
void prime(int);
int main()
{
    int n;
    printf("input n");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int n)
{
    int i,f=1;
    if(n==1 && n==0)
    {
        printf("not prime");
        return ;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        f=0;

    }
    if(f==1)
     printf("prime");
     else
     printf("not a prime");
}