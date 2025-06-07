#include <iostream>
using namespace std;

int getMax(int array[], int size){

    int maxi = INT32_MIN;

    // for (int i=0; i<size; i++){
    //     // if( array[i] > maxi ){
    //     //     // maxi = array[i];
    //     // }

    //     // OR
    //     // if (array[i] > maxi){
    //     //     maxi = max(array[i], maxi);
    //     // }
    // }

    // OR (using while loop)
    int i = 0;
    while(i<size){
        maxi = max(array[i], maxi);
        i++;
    }

    // return max;
    return maxi;
}

int getMin(int array[], int size){

    int min = INT32_MAX; // INT32_MAX is the maximum value a 32-bit signed integer can hold, we start with the largest number so that any value in the array will be smaller, and the loop can correctly find the minimum

    for ( int i=0; i<size; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}

int main (){

    // taking inputs from user
    int size;
    cout << "Number of elements in the Array : ";
    cin >> size;
    
    // array size should be known at the compile time so you should not decalre an array with user input size
    // int arr[size]; // wrong way
    int arr[100]; // right way : user can enter upto 100 elements

    for ( int i=0; i<size; i++){ // arr which can have 100 elements, we are taking only few inputs for exercise
        cin >> arr[i];
    }

    cout << "Maximum value in the given array is : " << getMax(arr, size) << endl;
    cout << "Minimum value in the given array is : " << getMin(arr, size) << endl;

}