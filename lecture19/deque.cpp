#include <iostream>
#include <deque>
using namespace std;

int main(){

    //DEFINING A DEQUE
    deque<int> d;

    //PUSHING ELEMENT FROM BACK
    d.push_back(1);
    d.push_back(5);

    //PUSHING ELEMENT FROM FRONT
    d.push_front(2);
    d.push_front(3);

    //PRINTING WHOLE DEQUE
    for(int i:d){
        cout << i << " ";
    }
    cout << endl;

    // //POPPING AN ELEMENT FROM FRONT
    // d.pop_front();

    // //POPPING AN ELEMENT FROM BACK
    // d.pop_back();

    for(int i:d){
        cout << i << " ";
    }
    cout << endl;

    //PRINTING FIRST AND LAST ELEMENT
    cout << "First element : " << d.front() << endl;
    cout << "Last element : " << d.back() << endl;

    //EMPTY OR NOT
    cout << "Empty or not : " << d.empty() << endl;

    //ERASE 
    cout << "Before erase : " << d.size() << endl;
    //DEFINE RANGE IN WHICH YOU WANT TO DELETE
    d.erase(d.begin(), d.begin()+2);
    cout << "After erase : " << d.size() << endl;
    for(int i:d){
        cout << i << " ";
    }
    cout << endl;

    //CLEAR
    d.clear();
    cout << "After clearing empty or not : " << d.empty() << endl;


}