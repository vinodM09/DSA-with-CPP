#include <iostream>
using namespace std;

int main (){

    int a, b;
    cout << "Enter first number : "; // if you want to write a string, you need to write it in double quotes ( "" )
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    char operation;
    cout << "Enter the operation you wish to perform : ";
    cin >> operation;

    switch( operation ){

        case '+': cout << (a+b) << endl; // if you want to write a single character, you need to use single quotes ( '' ),
                                         // switch only works with integral values so you have to write the case in ''
                  break;                 // break is important to prevent fall through (executing multiple cases)

        case '-': cout << (a-b) << endl;
                  break;

        case '*': cout << (a*b) << endl;
                  break;

        case '/': cout << (a/b) << endl;
                  break;

        default: cout << "Please enter a valid operator. (allowed operators: +, -, *, /)" << endl; // if the entered operation matches no case, default will be our outcome
    }
}