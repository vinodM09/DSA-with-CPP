#include <iostream>
using namespace std;

int getLength(char arr[]){
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){

    char a[11];

    cin.getline(a, 11);
    // a[2] = '\0';

    // getLength(a);

    cout << getLength(a) << endl;
}