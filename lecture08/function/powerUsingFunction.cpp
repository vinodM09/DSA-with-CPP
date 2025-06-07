#include <iostream>
using namespace std;

int power (int a, int b){

    int ans = 1;
    for (int i = 1; i<= b; i++){

        ans = ans * a; // since we have to find 'a' raise to the power 'b', means 'a' should be multiplied 'b' times

    }
    return ans;
}

int main(){

    int a, b;
    cout << "Enter thr value of base : ";
    cin >> a;
    cout << "Enter the valur of power : ";
    cin >> b;

    int answer = power(a, b);
    cout << "Answer is : " << answer << endl;
}