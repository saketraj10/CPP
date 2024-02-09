#include<iostream>
using namespace std;
int main(){
    char name[]="hello saket";
    char *cptr = name;
    while(*cptr != '\0')
        cptr++;
    cout<<"lenght= "<<cptr - name;
    return 0;
}