#include<iostream>
using namespace std;
class complex{
    int real, imag;
    public:
    complex(){
        real=0;
        imag=0;
    }
    complex(int r, int i){
        real = r;
        imag = i;
    }
    void show(){
        cout<<real<<" + i"<<imag<<endl;
    }
    complex operator+(complex);
};
complex complex::operator+(complex c2){
    complex temp;
    temp.real = real + c2.real;
    temp.imag = imag + c2.imag;
    return temp;
}
int main(){
    complex c1(3,5),c2(8,9),c3;
    c3 = c1 + c2;
    c1.show();
    c2.show();
    c3.show();
    return 0;
}