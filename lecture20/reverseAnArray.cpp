#include <iostream>
using namespace std;

void reverseArray(int arr[], int length){
    int start = 0;
    int end = length-1;
    // for(int i=0; i<length/2; i++){
    while(start<=end){
        // swap(arr[i], arr[length-1-i]);
        swap(arr[start], arr[end]);
        start = start+1;
        end = end-1;
    }
    // }
}
int main(){

    int arr[7] = {3, 5, 7, 6, 8, 9, 10};

    reverseArray(arr, 7);
    for(int i=0; i<7; i++){
        cout << arr[i] << " ";
    }
}