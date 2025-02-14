#include <iostream>
using namespace std;

int power( int num1 , int num2){

    int ans = 1;
    for ( int i=1; i<=num2; i++){

        ans = ans*num1;

    }
    return ans;
}

int main (){

    int a, b, c, d, e, f;
    cin >> a >> b;
    cout << "The answer is : " << power(a,b) << endl;
    cin >> c >> d;
    cout << "The answer is : " << power(c,d) << endl;
    cin >> e >> f;
    cout << "The answer is : " << power(e,f) << endl;

    // int answer = power(a,b);

}