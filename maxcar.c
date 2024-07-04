//To find sum of each row and find out the maximum sum
//not completed
#include<stdio.h>
int main()
{
    int i,j,a[10][10],max=a[i][0],n,m,sum=0;
    printf("input the row and column of the matrix");
    scanf("%d%d",&n,&m);
    printf("input matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum=sum+a[i][j];
        }
        printf("sum of row%d is %d",i+1,sum);
        if(max<sum)
        {
            max=sum;
        }
    }
        printf("max is %d ",max);
        return 0;
}