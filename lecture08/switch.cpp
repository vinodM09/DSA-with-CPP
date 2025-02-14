#include <iostream>
using namespace std;

int main (){

    int a = 2;
    int num = 1;

    switch(a){

        case 1: cout << "This is case 1" << endl;
                cout << "This is case 1.1" << endl;
        break;

        case 2: cout << "This path leads to nested case" << endl;
                switch (num){
                    case 1: cout << "This is nested num case" << endl;
                }
        break;

        default: cout << "This is default case" << endl;
    }
    
    return 0;

}