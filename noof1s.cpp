#include<iostream>
using namespace std;

int noof1s(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}
int main(){
    cout << noof1s(15)<< endl;
    return 0;
}