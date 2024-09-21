//multi-level inheritances
#include<iostream>
using namespace std;
class A
{
    
    public:
     void fun1()
     {
        cout<<"function1"<<endl;
     }
};
class B: public A
{
    public:
    void fun2()
    {
        cout<<"function2"<< endl;
    }
};
class C: public A{
    public :
    void func3()
    {
        cout<<"function3"<< endl;
    }
};
int main()
{
    A ob1;
    ob1.fun1();
    B ob2;
    ob2.fun1();
    ob2.fun2();
    C ob3;
    ob3.fun1();
    ob3.func3();
    return 0;
}