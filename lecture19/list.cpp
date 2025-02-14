#include <iostream>
#include <list>
using namespace std;

int main(){

    //DEFINING A LIST
    list<int> l;

    l.push_back(3);
    l.push_front(4);
    for(int i:l){
        cout << i << " ";
    }
    cout << endl;

    // l.pop_front();
    
    // l.erase(l.begin());
    // cout << "After erase : ";
    // for(int i:l){
    //     cout << i << " ";
    // }

    cout << "Size of list : " << l.size() << endl;
}