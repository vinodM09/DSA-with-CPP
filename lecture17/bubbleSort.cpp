#include <iostream>
using namespace std;

void bubbleSort(int arr[], int length){

    for(int i=0; i<length; i++){

        for(int j=0; j<length-1; j++){
            if(arr[j] > arr[(j+1)]){
                swap(arr[j], arr[(j+1)]);
            }
        }
    }
}
int main(){

    int arr[10] = {4, 3, 1, 6, 8, 3, 4, 33, 3, 3};

    bubbleSort(arr, 10);

    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
}