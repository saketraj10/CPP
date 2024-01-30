#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream opfile("test.txt");
    opfile<<"Hello saket"<<endl;
    opfile<<"how are you"<<endl;
    opfile.close();

    ifstream ipfile("test.txt");
    char ch;
    while(1){
        ch = ipfile.get();
        if(ipfile.eof()){
            break;
        }
        cout<<ch;
    }
    ipfile.close();
}