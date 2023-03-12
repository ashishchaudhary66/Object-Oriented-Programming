#include<iostream>
using namespace std;
class Time{
private :
    int hour;
    int minute;
public :
    void input();
    void sum(Time);
    void display();
};

int main()
{
    Time obj1,obj2;
    obj1.input();
    obj2.input();
    obj2.sum(obj1);
    obj2.display();
}

void Time::input()
{
    cout<<"Enter Hour : ";
    cin>>hour;
    cout<<"Enter Minute : ";
    cin>>minute;
}
void Time::display()
{
    cout<<"Hour : "<<hour<<" Minute : "<<minute;
}
void Time::sum(Time obj)
{
    int mint=obj.minute+minute;
    int hr=obj.hour+hour;
    if(mint>=60)
    {
        hour=hr+1;
        minute=mint%60;
    }
    else{
        hour=hr;
        minute=mint;
    }
}
