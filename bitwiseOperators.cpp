//bitwise operators
#include<iostream>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1 << pos))!=0);
}
int setBit(int n, int pos){
    return (n | (1 << pos));
}
int clearBit(int n, int pos){
    return (n & (~(1<<pos)));
}
int main(){
    int a = 5;
    cout << clearBit(a, 2);

    return 0;
}

