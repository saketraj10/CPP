#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream opfile("test.txt");
    if(!opfile){
        cout<<"cannot open this file"<<endl;
        return 1;
    }
    opfile<<"Hello saket"<<endl;
    opfile<<"how are you"<<endl;
    opfile.close();

    ifstream ipfile("test.txt");
    char str[80];
    if(!ipfile){
        cout<<"cannot open this file"<<endl;
        exit(0);
    }
    while(1){
        ipfile>>str;
        if(ipfile.eof()){
            break;
        }
        cout<<str;
    }
    ipfile.close();
}