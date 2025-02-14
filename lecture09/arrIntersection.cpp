#include <iostream>
using namespace std;

int arrIntersection(int arr[], int brr[], int length1, int length2){
    for ( int i=0; i<length1; i++){
        if( arr[i] == -1){
            continue;
        }
        int getElement = arr[i];
        bool duplicate = false;

        for (int j=0; j<length2; j++){
            if( i != j && getElement == brr[j]){
                duplicate = true;
                brr[j] = -1;
                break;
            }
        }
        if(duplicate){
            cout << getElement << " ";
            arr[i] = -1;
            }
    }
}

int main(){

    int arr[8] = {1, 2, 4, 2, 2, 3, 3, 5};
    int brr[8] = {1, 3, 2, 14, 2, 5, 7, 4};

    arrIntersection(arr, brr, 8, 8);
}