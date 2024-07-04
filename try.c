#include <stdio.h>
int isprime(int ); 
int main()
{
FILE *fp1,*fp2,*fp3;
int x,y,i;
char ch[50];
fp1=fopen("file.txt","r");
fp2=fopen("prime.txt","w");
fp3=fopen("nonprime.txt","w");
printf(" Contents are: \n");
while(fscanf(fp1,"%d", &x)!=EOF)
{
printf("%d\n",x);
y=isprime(x);
if (y==1)
{
     fprintf(fp2, "%d\n", x);
}
else
{
     fprintf(fp3, "%d\n", x);
}
}
fclose(fp1);
 fclose(fp2);
 fclose(fp3);
fp2=fopen("prime.txt","r");
fp3=fopen("nonprime.txt","r");
printf("Contents of the modified prime.txt file are: \n");
while(fscanf(fp2,"%d", &x)!=EOF)
{
printf("%d\n",x);}
printf("Contents of modifed notprime.txt file  are: \n");
while(fscanf(fp3,"%d", &x)!=EOF)
{
 printf("%d\n",x);}
fclose(fp2);
fclose(fp3);
}
int isprime(int n)
{
int i;
for(i=2;i<=n/2;i++)
{
    if(n%i==0){
    return 0;
}
}
 return 1;
}
