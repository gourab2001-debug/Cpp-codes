#include<iostream>
using namespace std;
void decimalToBinary(int n){
    int i;
    while(i<n){
        i = i*2;
    }
}
int main(){
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    decimalToBinary(n);
    return 0;
}