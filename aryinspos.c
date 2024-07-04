//imsertion at a given postion
#include<stdio.h>
int main()
{
    int i,j,n,a[20],elem,pos;
    printf("input the n");
    scanf("%d",&n);
    printf("input array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("input element and postion");
    scanf("%d%d",&elem,&pos);
    if(n==10)
    {
        printf("array is full");
    }
    else{
    for(i=n;i>=pos;i--)
    {
      a[i]=a[i-1];
    }
    
    a[pos-1]=elem;
    }
    n=n+1;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}