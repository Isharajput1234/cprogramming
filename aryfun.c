//to print reverse of each element of an array using functions
//not run
#include<stdio.h>
void reverse(int[],int);
int main()
{
    int i,a[i],n,rev;
    scanf("%d",&n);
    printf("input array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    return 0;
}
void reverse(int a[],int n)
{
    int rev,i;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;

    }
   for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        a[i]=rev(a[i]);

    }

}
