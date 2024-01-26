#include<iostream>
using namespace std;
class emp{
    static int id;
    int emp_id, age, salary;
    public:
    emp(int a, int s){
        emp_id = id;
        id++;
        age = a;
        salary = s;
    }
    void show(){
        cout<<emp_id<<","<<age<<","<<salary<<endl;
    }
};
int emp::id=100;
int main(){
    emp e1(26,34000);
    emp e2(35,74000);
    emp e3(29,44000);

    cout<<"E1: ";
    e1.show();
    cout<<"E2: ";
    e2.show();
    cout<<"E3: ";
    e3.show();
}