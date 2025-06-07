#include <iostream>
using namespace std;

// void tripletSum(int arr[], int length){
//     if(length % 3 == 0){
//         for(int i=0; i<length; i+=3){
//             int sum = arr[i]+arr[(i+1)]+arr[(i+2)];
//                 cout << "The sum of " << arr[i] << "," << " " << arr[(i+1)] << " and " << arr[(i+2)] << " is : "<<sum << endl;
//              }
//     }
//     else if(length % 3 == 1){
//         for(int i=0; i<length-2; i+=3){
//             int sum = arr[i]+arr[(i+1)]+arr[(i+2)];
//                 cout << "The sum of " << arr[i] << "," << " " << arr[(i+1)] << " and " << arr[(i+2)] << " is : "<<sum << endl;
//              }
//              while (int i=length-1){
//                 cout << arr[length-1];
//                 break;
//              }
//     }
//     else if(length % 3 == 2){
//         for(int i=0; i<length-2; i+=3){
//             int sum = arr[i]+arr[(i+1)]+arr[(i+2)];
//                 cout << "The sum of " << arr[i] << "," << " " << arr[(i+1)] << " and " << arr[(i+2)] << " is : "<<sum << endl;
//              }
//             //  while (int i=length-1){
//             //     cout << arr[length-1];
//             //     break;
//             //  }
//             //  while(int i= length){
//             //     cout << arr[length];
//             //     break;
//             //  }
//             for (int i=length-1; i<=length; i++){
//                 cout << "The last two numbers " << arr[(length-2)] << " and " << arr[(length-1)] << " does not form a triplet."<< endl;
//                 break;
//             }
//     }
//     }

// int main(){
//     // int arr[100];
//     // int size;
//     // cout << "Enter the length of the array : ";
//     // cin >> size;

//     // for ( int i=0; i<size; i++){
//     //     cin >> arr[i];
//     // }

//     int arr[11] = {1, 3, 5, 3, 5, 6, 3, 7, 8, 10, 11};

//     tripletSum(arr, 11);
// }

void tripletSum(int arr[], int size){
    int sum = 0;
    if(size%3 == 0){
        for(int i=0; i<size; i+=3){
            sum = arr[i] + arr[(i+1)] + arr[(i+2)];
            cout << "Sum of " << arr[i] << ", " << arr[(i+1)] << " and " << arr[(i+2)] << " is : " << sum << endl;
        }
    }
    else if(size%3 == 1){
        for(int i=0; i<size-1; i+=3){
            sum = arr[i] + arr[(i+1)] + arr[(i+2)];
            cout << "Sum of " << arr[i] << ", " << arr[(i+1)] << " and " << arr[(i+2)] << " is : " << sum << endl;
        }
        cout << "The element " << arr[size-1] << " does not form a triplet." << endl;
    }
    else if(size%3 == 2){
        for(int i=0; i<size-2; i+=3){
            sum = arr[i] + arr[(i+1)] + arr[(i+2)];
            cout << "Sum of " << arr[i] << ", " << arr[(i+1)] << " and " << arr[(i+2)] << " is : " << sum << endl;
        }
        cout << "The elements " << arr[size-2] << " and " << arr[size-1] << " does not form a triplet." << endl;
    }
    // OR
    //  else if(length % 3 != 0){
    //     for(int i=0; i<length-2; i+=3){
    //         sum = arr[i] + arr[(i+1)] + arr[(i+2)];
    //         cout << "Sum of " << arr[i] << ", " << arr[(i+1)] << " and " << arr[(i+2)] << " is : " << sum << endl;
    //     }
    //     cout << "The remaining elements does not form a triplet." << endl;
    // }

}
int main(){

    int arr[11] = {1, 3, 5, 7, 9, 10, 11, 14, 25, 28, 23};
    tripletSum(arr, 11);

}