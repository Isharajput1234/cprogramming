//nottt
#include <stdio.h>
#include <string.h>
int main()
{  
    FILE *fp;
    char word[100];
    fp = fopen("lenth.txt", "w");
    if (fp == NULL) 
    {
        printf("file error\n");
    }
    printf("Words with length between 4 and 7 characters:\n");
    while (fscanf(fp, "%99s", word) != EOF) 
    {
        if (strlen(word)>= 4 && strlen(word)<= 7) 
        {
            printf("%s\n", word);
        }
    }
    fclose(fp);
    return 0;
}
