#include<iostream>
using namespace std;
class demo{
    int x,y;
    public:
    demo(){
        x=0;
        y=0;
    }
    demo(int a, int b){
        x=a;
        y=b;
    }
    void show(){
        cout<<"x= "<<x<<endl;
        cout<<"y= "<<y<<endl;
    }
    friend void operator++(demo &);
    friend void operator--(demo &);
};
void operator++(demo &d){
    d.x++;
    d.y++;
}
void operator--(demo &d){
    d.x--;
    d.y--;
}
int main(){
    demo d1(4,5),d2(8,9);
    ++d1;
    --d2;
    cout<<"d1: "<<endl;
    d1.show();
    cout<<"d2: "<<endl;
    d2.show();
}