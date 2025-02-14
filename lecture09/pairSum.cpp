#include <iostream>
using namespace std;

void pairSum(int arr[], int length){
    if( length % 2 == 0){
        for(int i=0; i<length; i+=2){
        int sum = arr[i]+arr[(i+1)];
        cout << "Sum of"<< " " << arr[i] << " " << "and" << " " << arr[i+1] << " " << "is : " << sum <<  endl;
         }
    }
    else{
        for (int i=0; i<length-1; i+=2){
            int sum = arr[i] + arr[(i+1)];
           cout << "Sum of"<< " " << arr[i] << " " << "and" << " " << arr[i+1] << " " << "is : " << sum <<  endl;
        }
        // for (int i=0; i<length; i+=2){
        //     cout << arr[length-1] << endl;
        //     break;
        // }
        // OR
        while (int i=length){
            cout << "The last element" << " " << arr[length-1] << " " << "does not have any pair." << endl;
            break;
        }
    }
}
int main(){

    int arr[11] = {1, 3, 5, 3, 5, 6, 3, 7, 8, 10, 11};

    pairSum(arr, 11);
}