#include<iostream>
using namespace std;
class Hero
{
    //properties
    private:
    int health;
    public:
    char level;
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health=h;
    }
    void setlevel(char ch)
    {
        level=ch;
    }
};
int main()
{
    //creation of object
    Hero ob;
    cout<<"ramesh health is:"<< ob.gethealth()<<endl;
    ob.sethealth(70);
    ob.level='a';
    cout<<"health is :"<< ob.gethealth()<<endl;
     cout<<"level is :"<< ob.level<<endl;
     return 0;

}
