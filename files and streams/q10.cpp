#include<iostream>
#include<fstream>
using namespace std;
class student{
    char name[30];
    int rno;
    float avg_marks;
    public:
    void getdata(){
        cout<<"enter name: ";
        cin.getline(name, 30);
        //cin>>name;
        cout<<"roll no: ";
        cin>>rno;
        cout<<"enter avg_marks: ";
        cin>>avg_marks;
    }
    void showdata(){
        cout<<"name: "<<name<<" , rno: "<<rno<<" , avg_marks: "<<avg_marks<<endl;
    }
};
int main(){
    student s1,s2;
    ofstream op_file("student_data.txt");
    if(!op_file){
        cout<<"error in creating file.."<<endl;
        return 0;
    }
    s1.getdata();
    op_file.write((char*) &s1, sizeof(s1));

    op_file.close();

    ifstream ip_file("student_data.txt");
    ip_file.read((char*) &s2, sizeof(s2));
    cout<<"the content of the file: "<<endl;
    s2.showdata();

    ip_file.close();
    return 0;
}