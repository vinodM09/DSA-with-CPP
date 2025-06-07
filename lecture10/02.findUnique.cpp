#include <iostream>
using namespace std;

void findUnique(int arr[], int length){
    for(int i=0; i<length; i++){
        int anElement = arr[i];
        bool isUnique = true;

        for(int j=0; j<length; j++){
            if ( i != j && anElement == arr[j]){
                isUnique = false;
                break;
            }
        }
        if (isUnique){
            cout << anElement << " ";
            }
    }
}
int main(){

     int arr[8] = {2, 4, 2, 2, 4, 7, 5, 6};
     int length =8;

     findUnique(arr, length);
}
