#include <iostream>
using namespace std;

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
    // 2d array declaration
    int arr[3][3];
    // fixed input
    //int arr[3][3] = {{1, 11, 111},{2, 22, 222},{3, 33, 333}};
    // row wise input
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << "Enter the element : ";
            cin >> arr[i][j];
        }
    }
    // column wise input
    /*for(int j=0; j<3; j++){
        for(int i=0; i<3; i++){
            cout << "Enter the element : ";
            cin >> arr[i][j];
        }
    }*/
    printArr(arr);
    return 0;
}