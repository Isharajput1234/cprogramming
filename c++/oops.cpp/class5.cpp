//multi-level inheritances
#include<iostream>
using namespace std;
class animal
{
    public:
    int weight;
    int age;
    public:
     void speak()
     {
        cout<<"hello koko"<<endl;
     }
};
class dog:public animal
{
    public:
    void sleep()
    {
        cout<<"male sleeping"<< endl;
    }
};
class germanshepherd: public dog{

}; 
int main()
{
    dog ob;
    ob.speak();
    ob.sleep();
    cout<<ob.age<<endl;
    return 0;
}