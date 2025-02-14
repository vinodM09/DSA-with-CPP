#include <iostream>
using namespace std;

int findPivot(int arr[], int length){
    int start = 0;
    int end = length-1;
    int mid = start + (end-start)/2;

    while(start < end){
        // for first line
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }
        else{
        //for second line
            end = mid;
        }

        mid = start+ (end - start)/2;
    }
    return start;
}

int binarySearch(int arr[], int start, int end, int target){

    int mid = start + (end-start)/2;

    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }
        else if(target > arr[mid]){
            start = mid+1;
        }
        else if(target < arr[mid]){
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){

    int arr[6] = {6, 7, 8, 1, 2, 3};
    int target;
    cout << "Enter the ket to B.S. for : ";
    cin >> target;
    int length = 6;

    int pivot = findPivot(arr, length);

    if(target >= arr[pivot] && target <= arr[(length-1)]){

        cout << binarySearch(arr, pivot, length-1, target) << endl;

    }
    else{

        cout << binarySearch(arr, 0, pivot-1, target) << endl;

    }
    return 0;
}