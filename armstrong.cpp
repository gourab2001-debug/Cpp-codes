#include<iostream>
#include<cmath>
using namespace std;

int armstrong(int n){
    int ans = 0;
    while (n>0){
        int rem = n%10;
        ans = ans + rem*rem*rem;
        n = n/10;
    }
    return ans;
}
int main(){
    int n, ans;
    cout << "Enter any number: ";
    cin >> n;
    ans = armstrong(n);
    if(ans==n)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";
    return 0;
}