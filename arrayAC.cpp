#include<iostream>
using namespace std;

int main(){
    int n, s;
    cout <<  "Enter the number of elements and sum required: ";
    cin >> n >> s;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int i= 0, j= 0, st = -1, en= -1, sum = 0;
    while(j<n && sum+arr[j]<=s){
        sum += arr[j];
        j++;
    }

    if(sum == s){
        cout << i+1 << " " << j;
        return 0;
    }

    while(j<n){
        sum += arr[j];
        while(sum>s){
            sum -= arr[i];
            i++;
        }
        if(sum == s){
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }

    for(i = st-1; i <en; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
