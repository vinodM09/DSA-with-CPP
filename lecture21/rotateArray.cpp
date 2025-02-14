#include <iostream>
using namespace std;

void rotateArray(int arr[], int length, int k){
    int temp[length];
    for(int i=0; i<length; i++){
        temp[(i+k)%length] = arr[i];
    }
    arr = temp;
}
int main(){

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int k;
    cin >> k;

    rotateArray(arr, 6, k);
}