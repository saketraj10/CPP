#include<iostream>
using namespace std;
class demo{
    int x,y;
    public:
    demo(int a, int b):x(a),y(b){}
    void getdata(){
        cout<<"x= "<<x<<endl;
        cout<<"y= "<<y<<endl;
    } 
    void operator-();
};
void demo::operator-(){
    x=-x;
    y=-y;
}
int main(){
    demo d1(3,-5);
    d1.getdata();
    -d1;
    d1.getdata();
    return 0;
    
}