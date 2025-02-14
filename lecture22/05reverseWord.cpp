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
    for(int i=0; arr[i] != '\0'; i++){
    count++;
    }
    return count;
}

int main(){
    
    char arr[20];
    cout << "Enter your name : ";
    cin.getline(arr, 20);
    cout << "Entered name is : ";
    cout << arr << endl;
    int length = getLength(arr);
    cout << "String length is : " << length << endl;
    for(int i=0; i<length; i++){
    if(arr[i] >= 'A' && arr[i] <= 'Z' || arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= '0' && arr[i] <= '9'){
    continue;
    }
    else if(arr[i] == ' '){
    reverseArr(arr, length);
    break;
     }
    }
    cout << arr << endl;
    //cout << toUpperCase << endl;
   // char upp = toUpperCase(arr, length);
  //  cout << upp << endl;
    
    
}