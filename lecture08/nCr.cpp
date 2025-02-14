#include <iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for (int i = 1; i<=n; i++){
        ans = ans*i;
    }
    return ans;
}

int nCr(int n, int r){

    int numer = fact(n);
    int denom = fact(r) * fact(n - r);

    return numer / denom;
}

int main(){

    int n, r;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of r : ";
    cin >> r;

    int answer = nCr(n, r);
    cout << "The answer is : " << answer << endl;

    return 0;
}