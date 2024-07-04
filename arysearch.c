//to search a number and find its position ,frequency
#include<stdio.h>
int main()
{ 
    int i,n,ele,c=0,a[20];
    printf("input number of elements");
    scanf("%d",&n);
    printf("input the elements of array");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("input the element");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        c++;
    }
    if(c==0)
    printf("element not find");
    else
    printf("Element is found at %d and frequency is %d,i+1,c");
    
    return 0;
}