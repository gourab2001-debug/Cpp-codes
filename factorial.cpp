#include<iostream>
using namespace std;
int fact(int num)
{
    int fact = 1;
    for(int i = 1; i<=num; i++){
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int num;

    cout<<"Enter the number: ";
    cin>>num;

    int ans = fact(num);
    cout <<"The factorial of "<< num <<" is "<<ans;

    return 0;
}
