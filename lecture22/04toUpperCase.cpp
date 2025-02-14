#include <iostream>
using namespace std;

char toUpperCase(char ch){

    if(ch >= 'A' && ch <= 'Z'){
        return ch;
    }
    else{
        return ch - ('A' - 'a');
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
    cin >> arr;
    cout << "Entered name is : ";
    cout << arr << endl;
    int length = getLength(arr);
    cout << "String length is : " << length << endl;
    for(int i=0; i<length; i++){
        arr[i] = toUpperCase(arr[i]);
    }
    cout << arr << endl;
    //cout << toUpperCase << endl;
   // char upp = toUpperCase(arr, length);
  //  cout << upp << endl;
    
    
}