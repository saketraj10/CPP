#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
};
int main(){
    demo d[3]={
        demo(4,5),
        demo(7,8),
        demo(2,3)
    };
    for(int i=0; i<3; i++){
        cout<<"d["<<i<<"]: "<<endl;
        d[i].show();
    }
    return 0;
}