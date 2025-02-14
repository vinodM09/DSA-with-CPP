#include <iostream>
using namespace std;

int counting(int n){
    int i;
    for (int i = 1; i<=n; i++){

        cout << i << " ";
    }
}
int main (){


    int n;
    cout << "How many counts you want to print : ";
    cin >> n;

    counting(n);
    return 0;
}