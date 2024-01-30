#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream opfile("test.txt");
    const int MAX = 80;
    char buffer[MAX];
    opfile<<"Hello saket"<<endl;
    opfile<<"how are you"<<endl;
    opfile.close();

    ifstream ipfile("test.txt");
    while(1){
        ipfile.getline(buffer,MAX);
        if(ipfile.eof()){
            break;
        }
        cout<<buffer<<endl;
    }
    ipfile.close();
}