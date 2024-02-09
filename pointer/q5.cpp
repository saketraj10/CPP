#include<iostream>
using namespace std;
int main(){
    int *p, sum, i;
    int arr[]={3,5,4,7,9};
    p = arr;
    sum = 0;
    i = 0;
    while(i<5){
        sum += *p;
        i++;
        p++;
    }
    cout<<sum<<endl;
}