#include<iostream>
using namespace std;
int *hack;
class p{
     int i;
     public:
     p(int x):i(x){}
     int geti(){
        return i;
     }
};
int main(){
    p p1(5);
    *hack = p1.geti();
    *hack = 10;
    p1.geti();
    return 0;
}