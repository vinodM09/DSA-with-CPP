#include <iostream>
using namespace std;

void reverse(int arr[], int length){

    if(length%2 ==0){
         for (int i=0; i<length; i+=2){
                    int start = i;
                    int end = i+1;
                    swap(arr[start], arr[end]);
                }
    }
    else{
         for (int i=0; i<length-1; i+=2){
             int start = i;
             int end = i+1;
             swap(arr[start], arr[end]);
         }
    }
}
void printArray(int arr[], int length){

    for ( int i=0; i<length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){

    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int brr[5]= {1, 3, 5, 7, 8};

    reverse(arr, 8);
    reverse(brr, 5);

    printArray(arr, 8);
    printArray(brr, 5);
}