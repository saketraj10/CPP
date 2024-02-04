#include<iostream>
using namespace std;
class demo{
    int x,y,z;
    public:
    demo(){
        x=0;
        y=0;
        z=0;
    }
    demo(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
    void getdata(){
        cout<<"x= "<<x<<endl;
        cout<<"y= "<<y<<endl;
        cout<<"z= "<<z<<endl;
    }
    void operator--();
    void operator++();
};
void demo::operator--(){
    --x;
    --y;
    --z;
}
void demo::operator++(){
    ++x;
    ++y;
    ++z;
}
int main(){
    demo d1(3,4,5), d2(10,11,24);
    d1.getdata();
    --d1;
    d1.getdata();
    d2.getdata();
    ++d2;
    d2.getdata();
    return 0;
}