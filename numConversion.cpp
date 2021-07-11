#include<bits/stdc++.h>
using namespace std;

// void decimalToBinary(int n){
//     int i = 1;
//     int ans = 0;

//     while(i<n){
//         i*= 2;
//     }

//     while(i>0){
//         int lastDigit = n/i;
//         n -= lastDigit*i;
//         i/=2;
//         ans = ans*10 + lastDigit;
//     }
//     cout << ans << endl;
// }

// void decimalTOOctal(int n){
//     int i = 1;
//     int ans = 0;

//     while(n>i){
//         i*=8;
//     }

//     while(i>0){
//         int lastDigit = n/i;
//         n -= lastDigit*i;
//         i/=8;
//         ans = ans*10 + lastDigit;
//     }

//     cout << ans;
// }
void decimalTOHexadecimal(int num){
    int i = 0;
    char ans[10];

    while(num>0){
        ans[i] = num%16;
        num /= 16;
        i++;
    }

    for(int j = i-1; j >=0; j--){
        if(ans[i]>'9'&& ans[i]<'16'){

        }
        else{
            cout << ans[j];
        }
    }
}

int main(){
    int num;
    cout << "Enter the number to convert to octal: ";
    cin >> num;
    // decimalToBinary(num);
    // decimalTOOctal(num);
    decimalTOHexadecimal(num);

    return 0;
}