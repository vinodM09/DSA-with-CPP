#include <iostream>
using namespace std;

void spiralPrint(int arr[][3], int rows, int cols){
    int count = 0;
    int total = rows*cols;
    
    int startingRow = 0;
    int endingCol = cols-1;
    int endingRow = rows-1;
    int startingCol = 0;
    
    while(count < total){
        for(int index = startingCol; index<=endingCol && count<total; index++){
            cout << arr[startingRow][index] << " ";
            count++;
        }
        cout << endl;
        startingRow++;
        
        for(int index = startingRow; index<=endingRow && count<total; index++){
            cout << arr[index][endingCol] << " ";
            count++;
        }
        cout << endl;
        endingCol--;
        
        for(int index = endingCol; index>=startingCol && count<total; index--){
            cout << arr[endingRow][index] << " ";
            count++;
        }
        cout << endl;
        endingRow--;
        
        for(int index = endingRow; index>=startingRow && count<total; index--){
            cout << arr[index][startingCol] << " ";
            count++;
        }
        cout << endl;
        startingCol++;
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
    spiralPrint(arr, 3, 3);
    
    return 0;
}