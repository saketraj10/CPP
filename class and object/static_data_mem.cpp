#include<iostream>
using namespace std;
class demo{
    static int count;
    public:
    void getcount(){
        cout<<"count= "<<++count<<endl;
    }
};
//by default static data member is 0
int demo::count;
// this is below is the way to assign a value
//int demo::count=10;
int main(){
    demo d1,d2,d3;
    d1.getcount();
    d2.getcount();
    d3.getcount();
}