//to count upper and lower characters in a string
#include<stdio.h>
#include<string.h>
int main()
{ char a[20];
int l=0,up=0,ul=0;
printf("input a string:");
fgets(a,20,stdin);
for (int i = 0; a[i] != '\0'; i++) 
{
    if(a[i]>=65 && a[i]<=90){
    up++;
    }
    else if(a[i]>=97 && a[i]<=122)
    {
    ul++;
    }
    
}
printf("the upper case characters are :%d\n",up);
printf("lower case character :%d\n",ul);

    
    return 0;
}