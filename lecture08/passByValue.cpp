#include <iostream>
using namespace std;

int dummy(int n){
    // in pass by reference, the value of n is copied in the dummy function  so if you make any changes you would get different outputs from both the functions ( main and dummy);
    cout << n+1 << endl;
}
int main (){

    int n = 15;

    dummy(n);
    cout << n << endl;

}