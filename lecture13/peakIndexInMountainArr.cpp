#include <iostream>
using namespace std;

int findPeak(int arr[], int length){
    int start = 0;
    int end = length-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}
int main(){

    int arr[8] = {1, 3, 4, 6, 7, 5, 3, 2};

    int index = findPeak(arr, 8);
    cout << index << endl;
}