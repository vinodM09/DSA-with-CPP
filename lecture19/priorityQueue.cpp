#include <iostream>
#include <queue>
using namespace std;

int main(){

    //MAX HEAP
    priority_queue<int> maxi;
    priority_queue<int, vector<int> , greater<int> > mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);

    cout << "Size : " << maxi.size() << endl;

    int n = maxi.size();
    for(int i=0; i<n; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(0);
    mini.push(1);
    mini.push(5);
    mini.push(6);
    
    // int p = mini.size();
    // for(int i=0; i<p; i++){
    //     cout << mini.top() << " ";
    //     mini.pop();
    // }
    // cout << endl;

    cout << "Is it empty : " << mini.empty() << endl;


}