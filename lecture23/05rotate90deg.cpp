#include <iostream>
using namespace std;

void printWave(int arr[][3], int row, int col){
    for(int j=0; j<3; j++){
        if(col&1){
        // odd index
        for(int i=row-1; i>=0; i--){
            cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        else{
        for(int row=0; row<3; row++){
            cout << arr[row][col] << " ";
            }
            cout << endl;
        }
    }
}

void printArr(int arr[][3]){
    // row wise printing
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
    printWave(arr, 3, 3);
    
    return 0;
}

    