#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream myfile("message.txt", ios::app);
    if(!myfile){
        cout<<"cannot open this file"<<endl;
        return 1;
    }
    myfile<<"mca"<<endl;
    myfile.close();
}