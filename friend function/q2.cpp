#include<iostream>
using namespace std;
class beta;
class alpha{
    int data;
    public:
    alpha(){
        data = 3;
    }
    friend int frn_fn(alpha, beta);
};
class beta{
    int data;
    public:
    beta(){
        data = 7;
    }
    friend int frn_fn(alpha, beta);
};
int frn_fn(alpha a, beta b){
    return a.data+b.data;
}
int main(){
    alpha a1;
    beta b1;
    cout<<frn_fn(a1,b1);
    return 0;
}