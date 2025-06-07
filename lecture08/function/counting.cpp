#include <iostream>
using namespace std;

void counting(int n){ // void functions are used where we dont need to return any value to the main function, just do everything in it ( void function ) and print the output

    for (int i = 1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;
}
int main (){

    int n;
    cout << "How many counts you want to print : ";
    cin >> n;

    counting(n); // function call
    return 0;
}