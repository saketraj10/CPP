#include<iostream>
using namespace std;
class base{
    public:
    virtual void show(){
        cout<<"base"<<endl;
    }
};
class derv1: public base{
    public: 
    void show(){
        base::show();
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
    derv1 dv1;
    derv2 dv2;
    //dv1.show();
    //dv2.show();
    base * ptr;
    ptr = &dv1;
    ptr->show();
    ptr = &dv2;
    ptr->show();
    return 0;
    
}