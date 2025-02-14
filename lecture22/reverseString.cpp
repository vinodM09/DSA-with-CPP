#include <iostream>
using namespace std;

void reverseString(char str[], int length){
    int start = 0;
    int end = length-1;
    int mid = start + (end-start)/2;
    // while(start <= end){
    //     swap(str[start], str[end]);
    //     start++;
    //     end--;
    // } 
    // OR
    for(int i=0; i<mid; i++){
         swap(str[start], str[end]);
         start++;
         end--;
    }
    cout << "Reverse string is : " << str << endl;
}
int getLength(char str[]){
    int count = 0;
    for(int i=0; str[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){

    char str[10];
    cin.get(str, 10);
    int length = getLength(str);
    cout << "Length of the string is : " << length << endl;

    reverseString(str, length);
}