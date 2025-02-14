#include <iostream>
using namespace std;

int fibonacci(int n){

    if (n <= 1){
        return n;
    }
    
    int a = 0;
    int b = 1;
    int nextNumber = 0;

    cout << a << endl;
    cout << b << endl;

    for (int i = 2; i<=n; i++){

        nextNumber = a + b;
        // cout << nextNumber << endl;

        a = b;
        b = nextNumber;
    }
    return nextNumber;
}
int main (){

    int n;
    cout << "Enter n : ";
    cin >> n;

    cout << fibonacci(n) << endl;
}