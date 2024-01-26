#include<iostream>
using namespace std;
class weight{
    int kg, gram;
    public:
    weight():kg(0),gram(0){}
    weight(int k, int g): kg(k), gram(g){}
    void setweight(){
        cout<<"enter kg: ";
        cin>>kg;
        cout<<"enter gram: ";
        cin>>gram;
    }
    void getweight(){
        cout<<"kg= "<<kg<<endl;
        cout<<"gram= "<<gram<<endl;
    }
    weight addweight(weight);
};
weight weight::addweight(weight w){
    weight s;
    s.kg = kg + w.kg;
    s.gram = gram + w.gram;
    if(s.gram>=1000){
        s.kg += s.gram/1000;
        s.gram %= 1000;
    }
    return s;
}
int main(){
    weight w1(5,800),w2,w3;
    w2.setweight();
    w3 = w1.addweight(w2);

    w1.getweight();
    w2.getweight();
    w3.getweight();
    return 0;
}