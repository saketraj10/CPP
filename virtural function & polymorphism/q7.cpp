#include<iostream>
using namespace std;
class base{
    public:
    virtual ~base(){
        cout<<"destructor from base"<<endl;
    }
};
class derived: public base{
    public:
    ~derived(){
        cout<<"destructor from derived"<<endl;
    }
};
int main(){
    base *p1, *p2;
    p1 = new base();
    p2 = new derived();
    delete p1;
    delete p2;
}