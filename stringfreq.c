//to found a word in a string 
//not completed
#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    int i,n,f=0;
    printf("input string");
    fgets(str,40,stdin);
    printf("input n");
    scanf("%d",&n);
    for(i=0;i!='\0';i++)
    {
        if(str[i]==n)
        f++;
    }
    if(f==0)
    {
        printf("word is not found");
    }
    else{
        printf("word is found %d times at %d",f,i+1);
    }
    
    return 0;
}