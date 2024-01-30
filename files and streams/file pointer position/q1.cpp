#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch='A';
    fstream file("test.txt", ios::out);
    for(int i=0; i<10; i++, ch++){
        file<<ch;
    }
    file.seekp(2);
    file<<"Hello";
    file.close();
    file.open("test.txt", ios::in);
    file.seekg(2);
    while(1){
        file.get(ch);
        if(file.eof()){
            break;
        }
        cout<<ch;
    }
    file.close();
    return 0;
}