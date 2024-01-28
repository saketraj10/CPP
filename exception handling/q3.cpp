#include<iostream>
using namespace std;

int main() {
    int A[] = {10, 0, 2, 5}, n = 20, res, size = 4;
    try {
        for(int i = 0; i < size; i++) {
            if(A[i] == 0) {
                throw string("divide by zero");
            }
            res = n / A[i];
            cout << res << endl;
        }
    } catch(string msg) {
        cout << "exception caught.." << msg << endl;
    }
    cout << "end of program" << endl;
    return 0;
}
