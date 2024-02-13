#include<iostream>
using namespace std;
class base{
    public:
    virtual void show() = 0;
};
class derv1: public base{
    public: 
    void show(){
        cout<<"derv1"<<endl;
    }
};
class derv2: public base{
    public:
    void show(){
        cout<<"derv2"<<endl;
    }
};
int main(){
    base *ptr;
    derv1 dv1;
    //base b; //error because we cannot make object of pure virtual function & abstract class
    ptr = &dv1;
    ptr->show();
    ptr = new derv2();
    ptr->show();
    return 0;
    
}