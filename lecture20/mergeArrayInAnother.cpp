#include <iostream>
using namespace std;

void mergeArray(int arr1[], int m, int arr2[], int n, int arr3[]){

    int i = 0, j = 0, k = 0;
    while(i<m && j<n){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
            
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    // COPY REMAINING ELEMENTS OF FIRST ARRAY
    while(i<m){
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    // COPY REMAINING ELEMENTS OF SECOND ARRAY
    while(j<n){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void print(int arr[], int length){
    for(int i=0; i<length; i++){
        cout << arr[i] << " ";
    }
}
int main(){

    int arr1[6] = {1, 4, 5, 7, 8, 10};
    int arr2[4] = {2, 3, 6, 9};
    int arr3[10];

    mergeArray(arr1, 6, arr2, 4, arr3);

    print(arr3, 10);

}