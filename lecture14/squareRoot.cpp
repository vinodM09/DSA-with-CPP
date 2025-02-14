#include <iostream>
using namespace std;

int findSqrt(int key){

    int start = 0;
    int end = key;
    long long int mid = start + (end-start)/2;

    long long int ans = -1;
    while(start<=end){
        long long int square = mid*mid;
        if(square == key){
            return mid;
        }
        if(square<key){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

double morePrecise(int key, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;

    for (int i=0; i<precision; i++){
        factor = factor/10;

        for (double j=ans; j*j<key;  j = j+factor ){
            ans = j;
        }
    }
    return ans;
}
int main(){
    int key;
    cout << "Enter the key to find Square Root of : ";
    cin >> key;
    int tempSol = findSqrt(key);
    cout << "Answer is : " << morePrecise(key, 3, tempSol) << endl;
}