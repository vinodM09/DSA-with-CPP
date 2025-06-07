#include <iostream>
using namespace std;

bool isPrime(int n){

    for (int i=2; i<n; i++){
        if (n%i==0){
            // cout << i << endl; // this will give us the numbers which completely devides the given number (no use in this case) (find the numbers which completely divides the given number)
            return 0;
        } // there's no need for else function
    }
    return 1;
}

int main(){

    int n;
    cin >> n;

    if (isPrime(n)){
        cout << "The given number is Prime" << endl;
    }
    else {
        cout << "The given number is not Prime" << endl;
    }
    return 0;
}