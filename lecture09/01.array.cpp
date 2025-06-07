#include <iostream>
using namespace std;

// PRINT ARRAY
void printArray(int arr[], int size){
    cout << "Printing the array" << endl;

    // using while loop
    int i = 0;
    while(i<size){
        cout << arr[i] << " ";
        i++;
    }

    // using for loop
    // for(int i=0; i<size; i++){ // since arrays are 0 indexed, 'i' will go till 'size-1'
    //     cout << arr[i] << " ";
    // }
    cout << endl;
}

int main(){

    // DECLARE
    int arr[10];

    // TAKING OUTPUT of an array arr[index], since arrays are 0 indexed, arr[2] means the third value present in the array
    cout << arr[4] << endl; // since we didn't assign any values to the arr, this will result in a garbage value

    // ASSIGNING VALUE
    int value[10] = {1}; // if the assigned values are less than arrays size, then the remaining places will be filled with "\0" (null character), and if no values are assigned, just declaration of array then the places will have any garbage values

    // ASSIGNING ALL VALUES
    int values[4] = {3, 5, 3, 6};
    cout << values[3] << endl;

    // filling every place with the value 1
    int fillAllWithSingle[50];
    for(int i=0; i<=49; i++){
        fillAllWithSingle[i] = 1;
    }
    cout << fillAllWithSingle[45] << endl; // output = 1

    // using function call (array, size)
    printArray(values, 4);

    // size of an array (in bytes)
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    int somePrime[5] = {1, 2, 3, 5, 7};
    cout << "Occupied memory of vowels : " << sizeof(vowels) << endl; // output : 5 (char is of 1 byte)
    cout << "Occupied memory of somePrime : " << sizeof(somePrime) << endl; // output : 20 (int is of 4 bytes)

    int noOfElements = sizeof(somePrime) / sizeof(somePrime[0]);
    cout << "Number of elements in somePrime array : " << noOfElements << endl;
    
    return 0;
}