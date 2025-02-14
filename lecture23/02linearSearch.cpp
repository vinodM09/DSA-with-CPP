#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
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
    cout << "Enter the target element : ";
    int target;
    cin >> target;
    bool found = isPresent(arr, target, 3, 3);
    if(found){
        cout << "Target Found";
    }
    else{
        cout << "Not found";
    }
    return 0;
}