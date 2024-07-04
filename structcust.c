//print the customerid,balance,name
#include<stdio.h>
struct customer
{
    int cust_id;
    float bal;
    char nm[20];
};
int main()
{
    struct customer c[40];
    int i;
    for(i=0;i<10;i++)
    {
        printf("input custid,balance,name");
        scanf("%d%f%s",&c[i].cust_id,&c[i].bal,c[i].nm);
    }
    for(i=0;i<10;i++)
    {
        printf("%d%f%s",c[i].cust_id,c[i].bal,c[i].nm);
    }
    
}