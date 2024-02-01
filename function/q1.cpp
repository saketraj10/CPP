#include<iostream>
using namespace std;
void incr(int &);
int main(){
    int a =10;
    incr(a);
    cout<<a;
    return 0;
}
void incr(int &a){
    a++;
}