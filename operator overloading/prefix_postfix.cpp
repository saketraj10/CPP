#include<iostream>
using namespace std;
class demo{
    int x;
    public:
    demo():x(0){}
    demo(int a):x(a){}
    void setdata(){
        cout<<"enter the value of x: ";
        cin>>x;
    }
    void getdata(){
        cout<<"x= "<<x<<endl;
    }
    void operator++();
    void operator++(int);
};
void demo::operator++(){
    ++x;
}
void demo::operator++(int){
    x++;
}
int main(){
    demo d1(6);
    ++d1;
    d1.getdata();
    d1++;
    d1.getdata();
    return 0;
}