#include <iostream>
using namespace std;

// void update(int n){

//     n = n+2;
//     cout << n << endl;

// }
// int main(){

//     int n = 14;
//     update(n);
//     cout << n << endl; // return original value of n
// }

// int update(int n){

//     n = n+2;
//     return n;
// }
// int main(){

//     int n = 16;
//     update(n);
//     cout << n << endl;
// }

int update(int n){

    n = n+2;
    return n;
}
int main(){

    int n;
    cin >> n;
    update(n);
    cout << n << endl; // return the original value
    // int ans = update(n);
    // cout << ans << endl; // return the updated value
}