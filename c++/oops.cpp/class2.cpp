//encapsulate class
#include<iostream>
using namespace std;
class student
{
    private:
      string name;
      int age;
      int height;
    public:
     int getage()
     {
     return this->age;
     }
};
int main()
{
    student first;
    cout<<"yeah"<<endl;
    return 0;
}