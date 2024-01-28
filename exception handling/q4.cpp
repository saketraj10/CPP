#include<iostream>
using namespace std;
class zero{};
class negative{};
void exception_test(int arr[], int size){
    try{
        for(int i=0; i<size; i++){
            if(arr[i] == 0){
                throw zero();
            }
            if(arr[i] < 0){
                throw negative();
            }
            cout<<arr[i]<<endl;
        }
    }
    catch(zero){
        cout<<"exception caught...zero"<<endl;
    }
    catch(negative){
        cout<<"exception caught..negative"<<endl;
    }
}
int main(){
    int a[] ={10,20,-10,40};
    int size_a = 4;
    int b[] = {11,0,22};
    int size_b = 3;
    exception_test(a,size_a);
    exception_test(b,size_b);
    cout<<"end of program"<<endl;
}