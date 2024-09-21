//inheritance
#include<iostream>
using namespace std;
class human
{
    public:
    int height;
    int weight;
    int age;
    public:
     int getage()
     {
        return this->age;
     }
     void setweight(int w)
     {
        this->weight=w;
     }
};
class male:public human
{
    public:
    string color;
    void sleep()
    {
        cout<<"male sleeping"<< endl;
    }
};
int main()
{
    male ob1;
    cout<<ob1.age<<endl;
    cout<<ob1.weight<<endl;
    cout<<ob1.height<<endl;
    cout<<ob1.color<<endl;
    ob1.setweight (80);
    cout<<ob1.weight<<endl;
    ob1.sleep();
    return 0;
}