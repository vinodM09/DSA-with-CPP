#include <iostream>
using namespace std;

int largestRowSum(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[row][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is : " << maxi << endl;
    return rowIndex;
}

void printRowSum(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
    cout << endl;
}

void printColSum(int arr[][3], int row, int col){
    for(int j=0; j<col; j++){
        int sum = 0;
        for(int i=0; i<row; i++){
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
    cout << endl;
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
    cout << "Row wise sum is" << endl;
    printRowSum(arr, 3, 3);
    cout << "Col wise sum is" << endl;
    printColSum(arr, 3, 3);
    cout << "Printing largest sum" << endl;
    int maxIndex = largestRowSum(arr, 3, 3);
    cout << endl;
    cout << "Printing index of the row" << endl;
    cout << maxIndex;
    
    return 0;
}

