#include<iostream>
using namespace std;
int main(){
    int arr[]={11,22,33};
    int *ptr;
    ptr = arr;
    for(int i=0; i<3; i++){
        cout<<*(ptr++)<<" ";
    }
}