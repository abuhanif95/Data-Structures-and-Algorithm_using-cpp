#include <iostream>
using namespace std;

int getMaxSum(int mat[][3], int rows, int cols){
    int maxColumnSum = INT_MIN;
    for(int j=0; j<cols; j++){
        int columnSumJ =0;
        for(int i=0; i<rows; i++){
            columnSumJ += mat[i][j];
        }
        maxColumnSum =max (maxColumnSum, columnSumJ);
    }
    return maxColumnSum;
}

int main(){ 
    int matrix[3][3] = {{1, 2,3}, {4,5 ,6},{7,8,9}};
    int rows = 3;
    int cols = 3;

    cout << getMaxSum(matrix, rows, cols) << endl;

    return 0;
}