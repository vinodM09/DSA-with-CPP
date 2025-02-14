#include <iostream>
#include <array>
using namespace std;

int main(){

    // int a[4] = {1, 2, 3, 4};

    // CAN BE WRITTEN AS
    array<int, 4> a = {1, 2, 3, 4};

    // SIZE OF AN ARRAY
    int size = a.size();
    cout << "Size of the array is : " << size << endl;

    // PRINTING THE ARRAY
    for(int i=0; i<size; i++){
        cout << a[i] << " ";
    }

    // ELEMENT AT A PARTICULAR INDEX
    cout << "Element at 2 index : " << a.at(2) << endl;

    // CHECK IF ARRAY IS EMPTY OR NOT (1 MEANS EMPTY)
    cout << "Empty or not : " << a.empty() << endl;

    cout << "First element : " << a.front() << endl;
    cout << "Last element : " << a.back() << endl;
}