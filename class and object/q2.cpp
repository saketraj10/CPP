#include<iostream>
using namespace std;
class counter{
    unsigned int count;
    public:
    counter():count(0){}
    void inc_count(){
        count++;
    }
    int getcount(){
        return count;
    }
};
int main(){
    counter c1,c2;
    cout<<"c1= "<<c1.getcount()<<endl;
    cout<<"c2= "<<c2.getcount()<<endl;
    c1.inc_count();
    c2.inc_count();
    c2.inc_count();
    cout<<"c1= "<<c1.getcount()<<endl;
    cout<<"c2= "<<c2.getcount()<<endl;
}