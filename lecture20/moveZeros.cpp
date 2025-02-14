#include <iostream>
using namespace std;

void moveZeros(int arr[], int length){

    int i = 0;
    for(int j=0; j<length; j++){

        if(arr[j] != 0){
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

int main(){

    int arr[6] = {1, 0, 2, 4, 0, 44};

    moveZeros(arr, 6);

    for(int i=0; i<6; i++){
        cout << arr[i] << " ";
    }
}