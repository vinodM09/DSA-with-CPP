#include <iostream>
using namespace std;

bool search(int array[], int size, int key){
    for(int i=0; i<size; i++){
        if(array[i] == key){
            return true;
        }
    }
    return false;
}

int main(){

    int arr[10] = {1, 5, 8, 4, 3, -6, -4, 11, 55, 4};
    int key;
    cout << "Enter the element to search for : ";
    cin >> key;

    bool found = search(arr, 10, key);

    if(found){
        cout << "Key is present." << endl;
    }
    else{
        cout << "Key is absent." << endl;
    }

}