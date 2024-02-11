#include<iostream>
using namespace std;
template<class t>
class test{
    t a,b;
    public:
    void get(){
        cin>>a>>b;
    }
    t sum();
};
template<class t>
t test<t>::sum(){
    return a+b;
}
int main(){
    test <int>t1;
    test <float>t2;
    cout<<"enter two integer: "<<endl;
    t1.get();
    cout<<"sum: "<<t1.sum()<<endl;
    cout<<"enter two float: "<<endl;
    t2.get();
    cout<<"sum: "<<t2.sum()<<endl;
}