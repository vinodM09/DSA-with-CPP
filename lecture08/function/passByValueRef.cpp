#include <iostream>
using namespace std;

// pass by value
void valFunction(int n){
    // when you pass by value, the function gets a copy of the argument, changes made inside the function do not affect the original variable
    cout << "Output of the valFunction : " << n+1 << endl;

}

// pass by reference
void refFunction(int &n){
    // when you pass by reference, the function works with the original variable, changes made inside the function do affect the original variable
    cout << "Output of the refFunction : " << n+1 << endl;

}

int main (){

    int n = 15;
    cout << "Original n : " << n << endl;
    valFunction(n);
    cout << "Output of main when the number is passed by value : " << n << endl;
    refFunction(n);
    cout << "Output of main when the number is passed by reference : " << n << endl;
    return 0;
}