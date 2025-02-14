#include <iostream>
using namespace std;

bool checkPalindrome(char str[], bool reverseString){
    if(str == reverseString){
        return 1;
    }
    else{
        return 0;
    }
}

char reverseString(char str[], int length){
    int start = 0;
    int end = length -1;
    while(start <= end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
    return str;
}
int main(){

    char str[10];
    cin.get(str, 10);
    char rString = reverseString(str, 10);
    checkPalindrome(str, rString);
}