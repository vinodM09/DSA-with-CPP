#include <iostream>
using namespace std;

void pairSum(int arr[], int size){
    if(size%2 == 0){
        for(int i=0; i<size; i+=2){
            int sum = arr[i]+arr[(i+1)];
            cout << "Sum of"<< " " << arr[i] << " " << "and" << " " << arr[i+1] << " " << "is : " << sum <<  endl;
        }
    }
    else{
        for(int i=0; i<size-1; i+=2){
            int sum = arr[i] + arr[(i+1)];
            cout << "Sum of"<< " " << arr[i] << " " << "and" << " " << arr[i+1] << " " << "is : " << sum <<  endl;
        }
        cout << "The last element" << " " << arr[size-1] << " " << "does not have any pair." << endl;
    }
}
int main(){

    int arr[11] = {1, 3, 5, 3, 5, 6, 3, 7, 8, 10, 11};

    pairSum(arr, 11);
}