#include<iostream>
using namespace std;
class counter{
    int count;
    public:
    counter(){
        count=0;
    }
    counter(int x):count(x){}
    void getdata(){
        cout<<count<<endl;
    }
    counter operator++();
};
counter counter::operator++(){
    count++;
    counter temp(count);
    return temp;
}
int main(){
    counter c1,c2(9),c3;
    ++c1;
    ++c2;
    c3 = ++c2;
    cout<<"c1: ";
    c1.getdata();
    cout<<"c2: ";
    c2.getdata();
    cout<<"c3: ";
    c3.getdata();
}