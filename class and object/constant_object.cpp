#include<iostream>
using namespace std;
class Test{
    int alpha;
    public:
Test(){
    alpha = 10;
}
void fun(){
    alpha=25;
}
void const_fun() const{
    cout<<alpha;
}
};
int main(){
    //const Test t;
    Test t;
    t.const_fun();
    return 0;
}