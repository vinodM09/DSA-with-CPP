#include <iostream>
using namespace std;

int firstOcc(int arr[], int length, int key){
    int start = 0;
    int end = length-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        mid = start +(end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int length, int key){
    int start = 0;
    int end = length-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        mid = start +(end-start)/2;
    }
    return ans;
}
int main(){

    int arr[8] = {2, 3, 4, 4, 4, 6, 7, 9};
    int key;
    cout << "Enter the key to find occurence for : ";
    cin >> key;

    int index1 = firstOcc(arr, 8, key);
    int index2 = lastOcc(arr, 8, key);

    cout << "First Occurence index is : " << index1 << endl;
    cout << "Last Occurence index is : " << index2 << endl;

}