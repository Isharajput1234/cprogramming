//Array to count no of even and odd
#include <stdio.h>
int main() 
{
    int i,n,co=0,ce=0,a[10]; 
    printf("input the number of elements in array");
    scanf("%d",&n);
    printf("input the elements of array");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);    
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0)
        ce++;
        else
        co++;
    }
    printf("Number of even is %d and odd is %d",ce,co);
    return 0;
}