#include<iostream>
using namespace std;
class complex{
    int real, imag;
    public:
    complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }
    friend ostream & operator <<(ostream &, complex &);
    friend istream & operator >>(istream &, complex &);
};
ostream & operator <<(ostream &out, complex &c){
    out<<c.real;
    out<<"+i"<<c.imag<<endl;
    return out;
}
istream & operator >>(istream &in, complex &c){
    cout<<"enter real part ";
    in>>c.real;
    cout<<"enter imaginary part ";
    in>>c.imag;
    return in;
}
int main(){
    complex c1, c2;
    cout<<"enter two complex numbers: "<<endl;
    cin>>c1>>c2;
    cout<<"the complex numbers are: "<<endl;
    cout<<c1<<endl<<c2<<endl;
    return 0;
}