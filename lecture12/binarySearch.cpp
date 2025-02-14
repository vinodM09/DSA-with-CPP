#include <iostream>
using namespace std;

int binarySearch(int arr[], int length, int key){
    int start = 0;
    int end = length - 1;

    // int mid = start + (end-start)/2;

    while(start <= end){

        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        
    }
    return -1;
}
int main(){

    int evenArray[6] = {1, 4, 6, 8, 9, 10};
    int oddArray[7] = {2, 4, 8, 16, 32, 64, 128};

    int key;
    cout << "Enter the key to search for : ";
    cin >> key;

    int index = binarySearch(evenArray, 6, key);

    cout << "Index of the key is : " << index << endl;

}