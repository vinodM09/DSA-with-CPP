#include <iostream>
using namespace std;

void sortArray(int arr[], int length){
    for(int i=1; i<length; i++){
        int temp = arr[i];
        
        int j=i-1;
        while(j>=0){

            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j++;
        }
        arr[j+1] = temp;
    }
}
int main(){

    int arr[10] = {4, 3, 1, 6, 8, 3, 4, 33, 3, 3};

    sortArray(arr, 10);

    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
}