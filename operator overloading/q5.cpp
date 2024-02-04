#include<iostream>
using namespace std;
class array{
    int data[25], size;
    public:
    array(){
        size = 0;
    }
    array(int s){
        size = s;
    }
    void set(){
        for(int i=0; i<size; i++){
            cin>>data[i];
        }
    }
    void show(){
        for(int i=0; i<size; i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
    array operator+(array);
};
array array::operator+(array a){
    array temp(size);
    for(int i=0; i<size; i++){
        temp.data[i] = data[i] + a.data[i];
    }
    return temp;
}
int main(){
    array a1(5),a2(5),a3(5);
    a1.set();
    a2.set();
    a3 = a1 + a2;
    a1.show();
    a2.show();
    a3.show();
    return 0;
}