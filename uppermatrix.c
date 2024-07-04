//to print upper matrix elements as a zero
#include<stdio.h>
int main()
{
    // int arr[3][3]={{1,2,3}
    //               ,{4,5,6}
    //               ,{7,8,9}};
    int arr[10][10],n,m;
    scanf("%d%d",&n,&m);
    // cin>>n>>m;
    // if(m!=n)
    // printf("not a square matrix");
    // else
    // {
        // printf("input elements");
          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
             scanf("%d",&arr[i][j]);
            //cin>>arr[i][j];
            }
          }
    
         for(int i=0;i<n;i++){
          for(int j=i;j<m;j++)
            arr[i][j]=0; 
         }
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<m;j++)
           {
             printf("%d",arr[i][j]);
            //cout<<arr[i][j];
           }
           printf("\n");
         }
    

    
    return 0;
   }  