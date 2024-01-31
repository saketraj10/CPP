#include<iostream>
using namespace std;
class weight{
    int kg, gram;
    public:
    weight(){
        kg=0;
        gram=0;
    }
    weight(int k, int g){
        kg=k;
        gram=g;
    }
    void setdata(){
        cout<<"enter kg: ";
        cin>>kg;
        cout<<"enter gram: ";
        cin>>gram;
    }
    void getdata(){
        cout<<"kg= "<<kg<<endl;
        cout<<"gram= "<<gram<<endl;
    }
    friend weight addweight(weight,weight);
};
weight addweight(weight w1, weight w2){
    weight s;
    s.kg = w1.kg + w2.kg;
    s.gram = w1.gram + w2.gram;
    if(s.gram>=1000){
        s.kg += s.gram/1000;
        s.gram %= 1000;
    }
    return s;
}
int main(){
    weight w1(6,700),w2,w3;
    w2.setdata();
    
    w3 = addweight(w1,w2);

    w1.getdata();
    w2.getdata();
    w3.getdata();
    return 0;
}