#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    if(size%2 ==0){ // if the size is even
         for(int i=0; i<size; i+=2){
                    int start = i;
                    int end = i+1;
                    swap(arr[start], arr[end]);
                }
    }
    else{ // if the size is odd, since we don't have to do anything to the remaining element, that is why loop will not include that value
         for(int i=0; i<size-1; i+=2){
             int start = i;
             int end = i+1;
             swap(arr[start], arr[end]);
         }
    }
}
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){

    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int brr[5]= {1, 3, 5, 7, 8};

    swapAlternate(arr, 8);
    swapAlternate(brr, 5);

    printArray(arr, 8);
    printArray(brr, 5);
}