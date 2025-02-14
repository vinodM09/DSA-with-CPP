#include <iostream>
using namespace std;

// To find greater number among two numbers
// int main(){

//    int a,b;

//    cout<<"Enter a number:";
//    cin>>a;

//    cout<<"Enter another number:";
//    cin>>b;

//    if(a>b){
//     cout<<"The greater number is:"<<" "<<a<<endl;
//    }
//    else if(b>a){
//     cout<<"The greater number is:"<<" "<<b<<endl;
//    }
//    else{
//     cout<<"Both numbers are equal."<<endl;
//    }

// }

// To check if letter is smalcase or capital

int main(){
  char a;
  cout<<"Enter a letter:";
  cin>>a;

  if (a>='A' && a<='Z'){
    cout<<"Entered letter"<<a<<"is capital"<<endl;
  }
  else{
    cout<<"Entered letter "<<a<<" is smallcase"<<endl;
  }
}