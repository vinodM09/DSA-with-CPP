#include <iostream>
using namespace std;

int findDuplicate(int arr[], int length){
    for (int i=0; i<length; i++){
        if( arr[i] == -1){
            continue;
        }
        int getElement = arr[i];
        bool isDuplicate = false;

        for (int j=0; j<length; j++){
            if( i != j && getElement == arr[j]){
                isDuplicate = true;
                arr[j] = -1;
                break;
            }
        }
        if( isDuplicate ){
            cout << getElement << " ";
            arr[i] = -1;
        }
    }
}

int main(){

    int arr[10] = {1, 2, 2, 4, 3, 2, 6, 7, 8, 3};

    findDuplicate(arr, 10);
}