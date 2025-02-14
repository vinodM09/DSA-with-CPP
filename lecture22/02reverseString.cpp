#include <iostream>
using namespace std;

void reverseArr(char arr[], int length){
    int start = 0;
    int end = length-1;
    while (start < end){
        swap(arr[start++], arr[end--]);
    }
}

int getLength(char arr[]){
    int count = 0;
    for(int i=0; arr[i] !='\0'; i++){
        count++;
    }
    return count;
}

int main(){
    
    char arr[20];
    cout << "Enter your name : ";
    cin >> arr;
    cout << "Entered name is : ";
    cout << arr << endl;
    int length = getLength(arr);
    cout << "Length of the arr is : " << length << endl;
    reverseArr(arr, length);
    cout << "Reverse of the enterd name is : " << arr << endl;
}