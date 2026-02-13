#include <iostream>
using namespace std;

pair<int, int> linearSearch(int matrix[][3], int rows, int cols, int key){
    for(int i = 0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j] == key){
                return {i,j};
            }
        }
    }
    return {-1, -1};
};

int main(){
    int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    int rows = 4;
    int cols = 3;
    
    pair <int, int> result01 = linearSearch(matrix, rows, cols, 8);
    cout << "Pair is: [" << result01.first << "][" << result01.second << "]" <<endl;

    pair <int, int> result02 = linearSearch(matrix, rows, cols, 21);
    cout << "Pair is: [" << result02.first << "][" << result02.second << "]" <<endl;

    return 0;
}