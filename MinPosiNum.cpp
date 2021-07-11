#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements in the array : ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    const int N = 1e6+2;
    int check[N];
    for(int i = 0; i<N; i++){
        check[i] = 0;
    }

    for(int i = 0; i<n; i++){
        if(arr[i]>0){
            check[arr[i]] = 1;
        }
    }
    int ans;
    for(int i = 1; i<N; i++){
        if(check[i]==0){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
