#include<iostream>
using namespace std;
class myclass{
    int a,b;
    public:
    friend int sum(myclass);
    void set(){
        a=20;
        b=25;
    }
};
int sum(myclass x){
    return x.a+x.b;
}
int main(){
    myclass n;
    n.set();
    cout<<sum(n);
    return 0;
}