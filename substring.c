//to find substring in a string
//not completed
#include<stdio.h>
#include<string.h>
int main()
{
    char str[40],sbsrt[20];
    int i,j,f=0;
    printf("input two strings:");
    fgets(str,40,stdin);
    fgets(sbsrt,20,stdin);
    for(i=0;i!='\0';i++)
    {
        for(j=0;j!='\0';j++)

    {
        if(str[i+j]==sbsrt[j])
        {
            f=1;
        }
    }
    }
    if(f==1)
    {
        printf("string is found at%d",i+1);
    }
    else{
        printf("string is not found");
    }

    
    return 0;
}
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[40], sbsrt[20];
//     int i, j, f = 0;
//     printf("input two strings:");
//     fgets(str, 40, stdin);
//     fgets(sbsrt, 20, stdin);
//     for (i = 0; str[i] != '\0'; i++)
//     {
//         // Start matching from the beginning of the substring
//         for (j = 0; sbsrt[j] != '\0'; j++)
//         {
//             if (str[i+j] != sbsrt[j])
//             {
//                 break;
//             }
//         }

//         // If the inner loop completes without breaking, substring is found
//         if (sbsrt[j] == '\0')
//         {
//             f = 1;
//             break;
//         }
//     }
//     if (f == 1)
//     {
//         printf("string is found at %d\n", i + 1);
//     }
//     else
//     {
//         printf("string is not found\n");
//     }

//     return 0;
// }
