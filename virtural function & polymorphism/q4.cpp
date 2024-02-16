#include<iostream>
using namespace std;
class base{
    public:
    virtual void show1(){
        cout<<"show1 from base"<<endl;
    }
    void show2(){
        cout<<"show2 from base"<<endl;
    }
};
class derived : public base{
    void show1(){
        cout<<"show1 from derived"<<endl;
    }
    void show2(){
        cout<<"show2 form derived"<<endl;
    }
};
int main(){
    base *p1;
    derived d1;
    p1 = &d1;
    p1->show1();
    p1->show2();
}