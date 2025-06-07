#include <iostream>
using namespace std;

// code 1 -----------------------------------------------------------------------

// int main (){

//     int n;
//     cout << "Enter an amount : ";
//     cin >> n;

//     while ( n > 0 ){

//         if( n >= 100){

//             int count = n/100;
//             cout << "Number of 100s : " << count << endl;
//             n = n % 100;

//         } else if ( n >= 50){

//             int count2 = n/50;
//              cout << "Number of 50s : " << count2 << endl;
//             n = n%50;

//         } else if ( n >= 20){

//             int count3 = n/20;
//              cout << "Number of 20s : " << count3 << endl;
//             n = n%20;

//         } else if ( n >= 1 ){

//             int count4 = n/1;
//              cout << "Number of 1s : " << count4 << endl;
//             n = n%1;
//         }
//     }
// }

// code 2 -----------------------------------------------------------------------

// int main (){

//     int n;
//     cin >> n;

//     switch( n ){

//         default: cout << "Number of 100s is : " << n/100 << endl;
//                   n = n%100;

//         cout << "Number of 50s is : " << n/50 << endl;
//                   n = n%50;
                  
//         cout << "Number of 20s is : " << n/20 << endl;
//                   n = n%20;

//         cout << "Number of 1s is : " << n/1 << endl;
//     }
// }

void notes(int amount){
                 cout << "Number of 100s is:" << amount/100 << endl;
                 amount = amount%100;
                 cout << "Number of 50s is:" << amount/50 << endl;
                 amount = amount%50;
                 cout << "Number of 20s is:" << amount/20 << endl;
                 amount = amount%20;
                 cout << "Number of 1s is:" << amount/1 << endl;
}

int main() {
    int amount;
    cout << "Enter the amount:";
    cin >> amount;

    // switch (amount) {
    //     default: cout << "Number of 100s is:" << amount/100 << endl;
    //              amount = amount%100;
    //              cout << "Number of 50s is:" << amount/50 << endl;
    //              amount = amount%50;
    //              cout << "Number of 20s is:" << amount/20 << endl;
    //              amount = amount%20;
    //              cout << "Number of 1s is:" << amount/1 << endl;
    // }
    notes(amount);

}