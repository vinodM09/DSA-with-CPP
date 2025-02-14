#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<string> s;

    s.push("vinod");
    s.push("mali");
    s.push("software");

    cout << "Top element before pop : " << s.top() << endl;
    s.pop();
    cout << "Top element after pop : " << s.top() << endl;
    cout << "Size of stack : " << s.size() << endl;
    cout << "Empty or not : " << s.empty() << endl;
}