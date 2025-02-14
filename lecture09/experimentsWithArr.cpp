#include <iostream>
using namespace std;

void printArray1( int arr[], int size){
    for ( int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}
void printArray2( char arr[], int size){
    for ( int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}
int main(){

    // declare
    // int arr[15];

    // // accessing an array
    // cout << "Value at 1 index : " << arr[1] << endl;

    // // initialising an array
    // int first[10] = {1, 2, 3};
    // int n = 10;
    // cout << "Printing the array : " << endl;
    // for ( int i=0; i<n; i++){
    //     cout << first[i] << " ";
    // }

    // using function
    int second[15] = {5, 3, 6};
    int n = 15;
    printArray1(second, 15);

    int secondSize = sizeof(second)/sizeof(int);
    cout << secondSize << endl;

    char third[12] = {'a', 'e', 'i', 'o', 'u'};
    printArray2(third, 12);



    cout << "Everything is fine." << endl;
}