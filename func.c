//fibanacci series using function
#include<stdio.h>
void fib(int);
int main()
{
    int n;
    printf("input the value of n");
    scanf("%d",&n);
    fib(n);
    return 0;
}
void fib(int n)
{ int i,sum=0,x=0,y=1;
    if(n==1)
        printf("0");
     else if(n==2)
    printf("0\n1");
     else
     {
          printf("0 1");
            for( i=0;i<n-2;i++)
            { 
                sum=x+y;
                printf(" %d",sum);
                x=y;
                y=sum;
            
            }

    }
}
        
    
