//multiple inheritance
#include<iostream>
using namespace std;
class animal
{
    public:
    int weight;
    int age;
    public:
     void bark()
     {
        cout<<"hello koko"<<endl;
     }
};
class human
{
    public:
    void speak()
    {
        cout<<"male sleeping"<< endl;
    }
};
//multiple inheritance
class hybrid: public animal, public human{

}; 
int main()
{
    hybrid ob;
    ob.bark();
    ob.speak();
    
    return 0;
}