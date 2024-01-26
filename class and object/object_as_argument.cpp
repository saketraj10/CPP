#include<iostream>
using namespace std;
class weight{
    int kg, gram;
    public:
    weight(): kg(0), gram(0) {}
    weight(int k, int g): kg(k), gram(g) {}
    
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
    void addweight(weight w1, weight w2);
};
void weight::addweight(weight w1, weight w2){
    gram = w1.gram + w2.gram;
    kg = w1.kg + w2.kg;
    if(gram>=1000){
        kg += gram/1000;
        gram %= 1000;
    }
}
int main(){
    weight w1(4,700), w2, w3;
    w2.setweight();

    w3.addweight(w1,w2);
    w1.getweight();
    w2.getweight();
    w3.getweight();
    return 0;
}