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
    catch(int i){
        cout<<"caught exception #: "<<i<<endl;
    }
    catch(char c ){
        cout<<"caught exception #: "<<c<<endl;
    }
    catch(const char *str){
        cout<<"caught exception #: "<<str<<endl;
    }
}
int main(){
    cout<<"start"<<endl;
    xhandler(0);
    xhandler(1);
    xhandler(2);
    cout<<"end"<<endl;
    
}