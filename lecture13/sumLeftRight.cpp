#include <iostream>
using namespace std;

int findPivot(int arr[], int length){
    int totalSum = 0;
    int leftSum = 0;

    for ( int i=0; i<length; i++){
        totalSum += arr[i];
    }
    for ( int i=0; i<length; i++){
        totalSum -= arr[i];
        if(leftSum == totalSum){
            return i;
        }
        leftSum += arr[i];
    }
    return -1;


}
int main(){

    int arr[7] = {1, 5, 6, 7, 8, 0, 27};

    int index = findPivot(arr, 7);
    cout << index;
}