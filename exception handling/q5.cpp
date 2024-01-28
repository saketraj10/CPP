#include<iostream>
using namespace std;
void xhandler(int test){
    try{
        if(test == 0){
            throw "value is zero";
        }
        if(test == 1){
            throw 1;
        }
        if(test == 2){
            throw 'T';
        }
    }
    catch(...){
        cout<<"caught one"<<endl;
    }
}
int main(){
    cout<<"start"<<endl;
    xhandler(0);
    xhandler(1);
    xhandler(2);
    cout<<"end"<<endl;
    
}