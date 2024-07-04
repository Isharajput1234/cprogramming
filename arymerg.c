//to merge two sorted array without using sorting algo
#include<stdio.h>
int main()
{
    int a[10],b[10],c[20],i,k,j,n,m;
    printf("input n");
    scanf("%d",&n);
    printf("input elem1");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("input m");
    scanf("%d",&m);
    printf("input elem2");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    i=0;
    j=0;
    k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
        while(i<n)
        {
            c[k]=a[i];
            i++;
            k++;
        }
        while(j<m)
        {
            c[k]=b[j];
            j++;
            k++;
        }
        for(i=0;i<n+m;i++)
        {
            printf("%d",c[i]);
        }
       return 0;
}