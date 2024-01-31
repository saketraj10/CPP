#include<iostream>
using namespace std;
class test{
    int d1, d2;
    public:
    friend void setdata(test &);
    friend void showdata(test);
};
void setdata(test &t){
    t.d1=10;
    t.d2=20;
}
void showdata(test t){
    cout<<"d1= "<<t.d1<<endl;
    cout<<"d2= "<<t.d2<<endl;
}
int main(){
    test t;
    setdata(t);
    showdata(t);
    return 0;
}