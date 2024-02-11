#include<iostream>
//#include<string>
using namespace std;
int main(){
    char s[] = "hello";
    for(int i=0; s[i] !='\0'; i++){
        cout<<s[i];
    }
    cout<<s;
    return 0;
}