#include <iostream>
#include <set>
using namespace std;

int main(){

    set<int> s;
    s.insert(3);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(5);
    
    

    for(int i:s){
        cout << i << " ";
    }

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for(auto i:s){
        cout << i << endl;
    }
}