#include <iostream>
using namespace std;

void sortArray(int arr[], int length){
    for(int i=0; i<length; i++){
        int minIndex = i;
        for(int j=i+1; j<length; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
                swap(arr[i], arr[minIndex]);
            }
            
        }
    }
}
int main(){

    int arr[10] = {4, 3, 1, 6, 8, 3, 4, 33, 3, 3};

    sortArray(arr, 10);

    cout << "Printing the sorted array : ";
    for (int j=0; j<10; j++){
        cout << arr[j] << " ";
    }
    cout << endl;
}