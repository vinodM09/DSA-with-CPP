#include <iostream>
using namespace std;

bool isEven(int n){
    // odd
    // if(n&1){
    //     return 0;
    // }
    if (n%2 != 0) {
        return 0;
    }
    // even
    else{
        return 1;
    }
}

int main(){

    int n;
    cin >> n;

    if (isEven(n)){

        cout << "The given number is even." << endl;

    }
    else {

        cout << "The given number is odd." << endl;

    }

    return 0;
}