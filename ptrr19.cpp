// ****
//  ***
//   **
//    *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    while(i<n)
    {
        int space=i;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int j=n-i;
        while(j>0)
        {
            cout<<"*";
            j--;
        }
       cout<< endl;
       i++;
    }
}