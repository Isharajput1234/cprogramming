//nhi hua nhi hua ye bhi nhi hua
#include<stdio.h>
#include<string.h>
struct employee{
char nm[40];
int emid;
char desg[20];
float salary;
};
int main()
{
    struct employee e[40];
    int i,n;
    printf("input n");
    scanf("%d",&n);
    printf("input name,id,designation,salary");
    for(i=0;i<n;i++){ 
    scanf("%s%d%s%f",e[i].nm,&e[i].emid,&e[i].desg,&e[i].salary);
    }
    for(i=0;i<n;i++)
    {
        if(strcmp(e[i].desg,"manager")==0)
        e[i].salary=e[i].salary+0.2*e[i].salary;
        else if(strcmp(e[i].desg,"accountant")==0)
        e[i].salary=e[i].salary+0.15*e[i].salary;
        else
        e[i].salary=e[i].salary+0.1*e[i].salary;
    }
    for(i=0;i<n;i++)
    printf("%f",e[i].salary);
    return 0;
}

