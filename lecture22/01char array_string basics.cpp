#include <iostream>
using namespace std;

int getLength(char arr[]){
    int count = 0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;    
    }
    return count;
}

int main(){
   // char a = 'z';
   
   // first ex
   //char arr[10];
   //cout << "Enter your name : ";
   //cin >> arr;
   //cout << "Your name is : ";
   //cout << arr << endl;
   
   // second ex
   //char arr[10] = "Vinod";
   //cout << "Enter your name : ";
   //cin >> arr;
   //cout << "Your name is : ";
   //cout << arr << endl;
   
   // third ex - tab, space, enter will stop the execution
   //char arr[20];
   //cout << "Enter your name : ";
   //cin >> arr;
   //cout << "Your name is : ";
   //cout << arr << endl;
   
   // fourth ex
   //char arr[20];
   //cout << "Enter your name : ";
   //cin >> arr;
   //arr[2] = '\0';
   //cout << "Your name is : ";
   //cout << arr << endl;
   
   // fifth ex
   char arr[10];
   cout << "Enter your name : ";
   cin >> arr;
   cout << "Length of the string is : ";
   cout << getLength(arr) << endl;
   
   return 0;
}