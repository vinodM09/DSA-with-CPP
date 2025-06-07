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

    // when we call the funtion, it just provide the function output, the value present in the main function stays the same
    // int ans = update(n);
    // cout << ans << endl; // return the updated value
    cout << n << endl; // return the original value
    return 0;
}