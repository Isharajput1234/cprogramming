//prime or not prime
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    i=2;
    cin>>n;
    while(i<n)
    {
        if(n%i==0){
        cout<<"not prime for "<< i << endl;
        }
        else
        {
        cout<<"prime for"<< i << endl;
        }
        i++;

    }
}