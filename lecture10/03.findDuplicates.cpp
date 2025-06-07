#include <iostream>
using namespace std;

void findDuplicate(int arr[], int size){
    bool visited[100] = {false};
    for(int i=0; i<size; i++){
        if (visited[i]) continue;
        int element = arr[i];
        bool isDuplicate = false;
        bool isVisited = false;
        for(int j=i+1; j<size; j++){
            if(element == arr[j]){
                isDuplicate = true;
                visited[j] = true;
            }
        }
        if(isDuplicate){
            cout << element << endl;
            visited[i] = true;
        }
    }
}
int main(){
    int arr[10] = {-1,-1,2,2,3,4,5,3,7,3};
    findDuplicate(arr, 10);
}