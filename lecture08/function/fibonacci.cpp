#include <iostream>
using namespace std;

void fibonacci(int n){

    if (n <= 1){
        cout << n - 1 << endl;
        return;
    }

    int a = 0;
    int b = 1;
    int nextNumber = 0;

    cout << a << endl;
    cout << b << endl;

    for (int i = 2; i<=n; i++){

        nextNumber = a + b;
        cout << nextNumber << endl;

        a = b;
        b = nextNumber;
    }
}

int main (){

    int n;
    cout << "Enter n : ";
    cin >> n;

    fibonacci(n);
    return 0;
}