#include <iostream>
using namespace std;

// void arrIntersection(int arr[], int brr[], int size1, int size2){
//     for(int i=0; i<size1; i++){
//         if(arr[i] == INT_MIN){
//             continue;
//         }
//         int anElement = arr[i];
//         bool duplicate = false;

//         for(int j=0; j<size2; j++){
//             if(brr[j] == INT_MIN){
//                 continue;
//             }
//             if(i != j && anElement == brr[j]){
//                 duplicate = true;
//                 brr[j] = INT_MIN;
//                 break;
//             }
//         }
//         if(duplicate){
//             cout << anElement << " ";
//             arr[i] = INT_MIN;
//         }
//     }
// }

// int main(){

//     int arr[8] = {1, 2, 4, 2, 2, 3, 3, 5};
//     int brr[8] = {1, 3, 2, 14, 2, 5, 7, 4};

//     arrIntersection(arr, brr, 8, 8);
// }

void findIntersection(int arr[], int size1, int brr[], int size2){
    int isVisited[100] = {false};
    for(int i=0; i<size1; i++){
        int element = arr[i];
        for(int j=0; j<size2; j++){
            if(isVisited[j]) continue;
            if(element == brr[j]){
                cout << element << " ";
                isVisited[j] = true;
            }
        }
    }
}

int main(){
    int arr[6] = {1, 1, 5, 4, 6, 7};
    int brr[5] = {2, 4, 5, 0, 1};
    findIntersection(arr, 6, brr, 5);
}