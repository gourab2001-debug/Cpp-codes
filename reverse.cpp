#include<iostream>
#include<cmath>
using namespace std;

void reverse(int n){
    int reverse=0;
    while(n>0){
        int lastDigit = n%10;
        reverse = reverse*10 + lastDigit;
        n /=10;
    }
    cout << reverse;
}
int main(){
    int n;
    n = 3456;
    reverse(n);
    return 0;
}