#include<iostream>
using namespace std;
class demo{
    int m,n;
    public:
    demo(int x,int y){
        m=x;
        n=y;
        cout<<"Parametrized constructor"<<endl;
    }
    demo(demo &d){
        m=d.m;
        n=d.n;
        cout<<"copy constructor"<<endl;
    }
    void show(){
        cout<<"m= "<<m<<endl;
        cout<<"n= "<<n<<endl;
    }
};
int main(){
    demo ob1(5,6);
    demo ob2(ob1);
    demo ob3=ob1;
    ob1.show();
    ob2.show();
    ob3.show();
}