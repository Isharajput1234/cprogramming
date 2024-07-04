#include<stdio.h>
int main()
{
    //FILE *fp;
    // fp=fopen(hello.txt,"w");
    // fclose(fp);

FILE *fptr;

// Create a file
fptr = fopen("hey.txt", "w");
char str[100];
if(fptr==NULL)
{
    printf("error");
}
else{
while(fgets(str,100,fptr))
{
printf("%s",str);
}
}
//fprintf(fptr," abyyy dubyy chabbaaa");
fclose(fptr);


}