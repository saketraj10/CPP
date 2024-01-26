#include<iostream>
using namespace std;
class test{
    int alpha;
    public:
    void constfun() const{
        int x=11;
        x++;
    }
};
int main(){
    test t;
    t.constfun();
    return 0;
}