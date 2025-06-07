#include <iostream>
using namespace std;

void reverse(int array[], int size){ // this looks like we are passing the array by value, but its actually passed by reference, there is no way to pass an array by value in normal context (it is same as int* arr), so if you do any changes here, they will be reflected in the original array
    int start = 0;
    int end = (size-1);

    while(start<=end){
        swap(array[start], array[end]);
        start = start+1;
        end = end-1;
    }
}

void printArray(int array[], int size){

    for (int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}
int main(){

    int arr[4] = {1, 2, 3, 4};
    int brr[5] = {0, 9, 5, 6, 7};

    reverse(arr, 4);
    reverse(brr, 5);

    printArray(arr, 4);
    printArray(brr, 5);
}