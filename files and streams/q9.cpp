#include<iostream>
#include<fstream>
//#include<string>
using namespace std;
int main(){
    fstream myfile;
    char msg[75];
    myfile.open("message.txt", ios::app);
    if(!myfile){
        cout<<"cannot open this file"<<endl;
        return 1;
    }
    cout<<"enter a msg: ";
    cin.getline(msg,75);
    myfile<<msg<<endl;
    myfile.close();

    myfile.open("message.txt", ios::in);

    cout<<"the file content is: "<<endl;
    while(1){
        myfile.getline(msg,75);
        if(myfile.eof()){
            break;
        }
        cout<<msg<<endl;
    }
    myfile.close();
}