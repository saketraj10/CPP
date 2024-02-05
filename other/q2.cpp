#include<iostream>
using namespace std;
class matrix{
	private:
		int a[50][50],row,col;
	public:
		matrix(int a,int b){
			row=a;col=b;
		}
		
	void getdata(){
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++)
			cin>>a[i][j];
			cout<<endl;
		}
	}
	void showdata(){
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	}
    friend matrix operator +(matrix,matrix);
//    	matrix temp(row,col);
//    	for(int i=0;i<row;i++){
//    		for(int j=0;j<col;j++){
//    			temp.a[i][j]=a[i][j] + m2.a[i][j];
//			}
//		}
//		return temp;
//	}	
};
matrix operator +(matrix m1,matrix m2){
	matrix temp(m1.row,m1.col);
    	for(int i=0;i<m1.row;i++){
    		for(int j=0;j<m1.col;j++){
    			temp.a[i][j]=m1.a[i][j] + m2.a[i][j];
			}
		}
		return temp;
}
int main(){
	int r,c;
	cout<<"Enter the row then size : ";
	cin>>r>>c;
	matrix m1(r,c),m2(r,c),m3(r,c);
	cout<<"Enter Element of matrix 1 :"<<endl;
	m1.getdata();
	cout<<"\nEnter Element of matrix 2 :"<<endl;
	m2.getdata();
	cout<<"\n\n Element of matrix 1 is "<<endl; 
	m1.showdata();
	cout<<"\n\n Element of matrix 2 is "<<endl;
	m2.showdata();
	//m3=operator+(m1,m2);
    m3 = m1 + m2;
    cout<<"sum of matrix is : "<<endl;
	m3.showdata();
	return 0;
	
}