#include <iostream>
using namespace std;


int getMax(int array[], int size){

    // int max = INT32_MIN;
    // OR
    int maxi = INT32_MIN;

    for (int i=0; i<size; i++){
        // if( array[i] > max ){
        //     // max = array[i];
        //     // OR

        // }
        if ( array[i] > maxi){
            maxi = max(array[i], maxi);
        }
    }

    // return max;
    return maxi;
}

int getMin( int array[], int size){

    int min = INT32_MAX;

    for ( int i=0; i<size; i++){
        if( array[i] < min){
            min = array[i];
        }
    }
    return min;
}

int main (){

    int size;
    cout << "How many elements are in Array : ";
    cin >> size;

    int arr[100];

    for ( int i=0; i<size; i++){

        cin >> arr[i];

    }

    cout << "Maximum value in the given array is : " << getMax(arr, size) << endl;
    cout << "Minimum value in the given array is : " << getMin(arr, size) << endl;

}