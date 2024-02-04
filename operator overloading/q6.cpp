#include<iostream>
using namespace std;
class array{
    int data[30][30],col,row;
    public:
    array(){
        col = 0;
        row = 0;
    }
    array(int c, int r){
        col = c;
        row = r;
    }
    void set(){
        for(int i=0; i<col; i++){
            for(int j=0; j<row; j++){
                cin>>data[i][j];
            }
        }
    }
    void show(){
        for(int i=0; i<col; i++){
            for(int j=0; j<row; j++){
                cout<<data[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    array operator-(array a){
        array temp(col,row);
            for(int i=0; i<col; i++){
                for(int j=0; j<row; j++){
                 temp.data[i][j] = data[i][j] - a.data[i][j];
                }
            }
        return temp;
    }
};
int main(){
    int c,r;
    cout<<"enter the cols of array: ";
    cin>>c;
    cout<<"enter the rows of array: ";
    cin>>r;
    array a1(c,r),a2(c,r),a3(c,r);
    cout<<"enter the 2d array for a1: "<<endl;
    a1.set();
    cout<<"enter the 2d array for a2: "<<endl;
    a2.set();

    a3 = a1 - a2;

    cout<<"display the array of a1: "<<endl;
    a1.show();
    cout<<"display the array of a2: "<<endl;
    a2.show();
    cout<<"display the array of a3: "<<endl;
    a3.show();
}