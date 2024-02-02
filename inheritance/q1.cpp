#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"constructor of base"<<endl;
    }
    void show(){
        cout<<"show() of base"<<endl;
    }
};
class derived: public base{
    public:
    derived(){
        cout<<"constructor of derived"<<endl;
    }
    void show(){
        //base::show();
        cout<<"show() of derived"<<endl;
    }
};
int main(){
    derived ob;
    ob.base::show();
    ob.show();
    return 0;
}