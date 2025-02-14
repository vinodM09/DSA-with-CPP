#include <iostream>
using namespace std;

int main (){

    int a, b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter seconnd number : ";
    cin >> b;
    char operation;
    cout << "Enter the operation you wish to perform : ";
    cin >> operation;

    switch( operation ){

        case '+': cout << (a+b);
                  break;

        case '-': cout << (a-b);
                  break;

        case '*': cout << (a*b);
                  break;

        case '/': cout << (a/b);
                  break;

        default: cout << "Please enter a valid operator." << endl;
    }
}