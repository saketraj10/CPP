#include<iostream>
using namespace std;
template<class t>
t sum(t a[], int size){
    t sum = 0;
    for(int i=0; i<size; i++){
        sum += a[i];
    }
    return sum;
}
int main(){
    int x[]={5,6,9,8,7};
    float y[]={5.3,3.6,9.4};
    cout<<"Integer array element sum: "<<sum(x,5)<<endl;
    cout<<"float array element sum: "<<sum(y,3)<<endl;
}