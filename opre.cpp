#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=6;
    cout<<"a&b " <<(a&b)<< endl;
    cout<<"a|b " <<(a|b)<< endl;
    cout<<"~a " <<~a<< endl;
    cout<<"a^b " <<(a^b)<< endl;

    cout<<(17>>1)<< endl;
    cout<<(17>>2)<< endl;
    cout<<(19<<1)<< endl;
    cout<<(21<<2)<< endl;


}
// a&b 4
// a|b 6
// ~a -5
// a^b 2
// 8
// 4
// 38
// 84