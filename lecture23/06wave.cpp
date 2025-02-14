#include <iostream>
using namespace std;

void printWave(int arr[][3], int rows, int cols){
    for(int col=0; col<cols; col++){
        if(col&1){
        // odd index
        for(int row=rows-1; row>=0; row--){
            cout << arr[row][col] << " ";
            }
        }
        else{
        // even index
        for(int row=0; row<rows; row++){
            cout << arr[row][col] << " ";
            }
        }
        cout << endl;
    }
}

void printArr(int arr[][3]){
    // col wise printing
    for(int j=0; j<3; j++){
        for(int i=0; i<3; i++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

int main(){
    // linear search
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printArr(arr);
    cout << endl;
    printWave(arr, 3, 3);
    
    return 0;
}

    