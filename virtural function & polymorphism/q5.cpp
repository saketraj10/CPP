#include<iostream>
using namespace std;
const double pi = 3.14;
class shape{
    public:
    virtual double area() = 0;
};
class rectangle: public shape{
    double length, breadth;
    public:
    rectangle(double l, double b){
        length = l;
        breadth = b;
    }
    double area(){
        return length * breadth;
    }
};
class circle: public shape{
    double radius;
    public:
    circle(double r){
        radius = r;
    }
    double area(){
        return pi*radius*radius;
    }
};
int main(){
    rectangle r1(5.6,6.7);
    circle c1(6.12);
    int x = 4;
    shape *p[]={&r1, new rectangle(9.4,2.3), &c1, new circle(8.12)};
    for(int i=0; i<x; i++){
        cout<<"Area= "<<p[i]->area()<<endl;
    }
    return 0;
}