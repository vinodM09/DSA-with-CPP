#include <iostream>
using namespace std;

void rotateAntiClock(int arr[][3], int rows, int cols){
    for(int row=0; row<rows; row++){
        for(int col=cols-1; col>=0; col--){
            cout << arr[col][row] << " ";
        }
        cout << endl;
    }
}

void printArr(int arr[][3]){
    // col wise printing
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
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
    rotateAntiClock(arr, 3, 3);
    
    return 0;
}