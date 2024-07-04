//to reverse an array
#include<stdio.h>
int main()
{
    int i,j,n,a[20],temp;
    printf("input the n");
    scanf("%d",&n);
    printf("input array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    
    return 0;
}