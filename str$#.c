//print'#' in the place of vowles and '$' in the place of constants
#include<stdio.h>
#include<string.h>
int main()
{ 
    char str[20];
    int i;
    printf("input a string: ");
    fgets(str,20,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            str[i]='#';
        }
        else
        {
            str[i]='$';
            
        }
    }
    puts(str);
    return 0;
}