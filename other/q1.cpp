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
//	void sumdata(){
//			for(int i=0;i<row;i++){
//			for(int j=0;j<col;j++){
//			m3[i][j]=m1[i][j]+m2[i][j];
//		}
//	    }
//	}
    matrix operator +(matrix m3){
    	matrix temp(row,col);
    	for(int i=0;i<row;i++){
    		for(int j=0;j<col;j++){
    			
    			temp.a[i][j]=a[i][j] + m3.a[i][j];
			}
		}
		return temp;
	}	
};
int main(){
	int r,c;
	cout<<"Enter the row then size : ";
	cin>>r>>c;
	matrix m1(r,c),m2(r,c),m3(r,c);
	m1.getdata();
	m2.getdata();
	m1.showdata();
	m2.showdata();
	m3=m1+m2;
//	m3.sumdata();
   cout<<"sum of matrix is : "<<endl;
	m3.showdata();
	return 0;
}