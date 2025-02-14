#include <iostream>
#include <vector>
using namespace std;

int main(){

    // DEFINING A VECTOR
    vector<int> v;

    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity : " << v.capacity() << endl;

    // SIZE GETS DOUBLED IF WE INSERT NUMBER OF ELEMENTS MORE THAN ITS SIZE
    v.push_back(3);
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(4);
    cout << "Capacity : " << v.capacity() << endl;

    cout << "Front element : " << v.front() << endl;
    cout << "Last element : " << v.back() << endl;

    // V.SIZE WILL GIVE YOU EXACT NUMBER OF ELEMENTS PRESENT
    cout << "Size : " << v.size() << endl;

    //ELEMENT AT ANY INDEX
    cout << "Element at 2 index : " << v.at(2) << endl;

    //POP
    cout << "Before pop : ";
    for(int i:v){   // FOR LOOP FOR VECTOR
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "After pop : ";
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    //CLEAR
    cout << "Before clear size : " << v.size() << endl;
    v.clear();
    cout << "After clear size : " << v.size() << endl;

}