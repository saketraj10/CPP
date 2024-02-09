#include<iostream>
using namespace std;
int main(){
    int x=12;
    int *ptr;
    ptr = &x;
    float num;
    char ch;
    cout<<*ptr<<endl;
    *ptr = 5;
    cout<<*ptr<<endl;
    cout<<"address of x is "<<&x<<endl;
    cout<<"value of x is "<<x<<endl;
    cout<<"address of num is "<<&num<<endl;
    cout<<"address of ch is "<<&ch<<endl;
}