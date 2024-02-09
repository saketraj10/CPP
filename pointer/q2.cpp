#include<iostream>
using namespace std;
int main(){
    int A[]={11,22,33};
    *(A+2) = 77;
    for(int i=0; i<3; i++){
        cout<<*(A+i)<<" ";
    }
}