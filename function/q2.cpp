#include<iostream>
using namespace std;
int matrix_sum(int [][10], int , int);
int main(){
    int mat[][10] = {{1,20}, {3,4}, {5,6}};
    int rows = 3, cols = 2;
    int total = matrix_sum(mat,rows,cols);
    cout<<total;
    return 0;
}
int matrix_sum(int M[][10], int r, int c){
    int sum = 0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum +=M[i][j];
        }
    }
    return sum;
}