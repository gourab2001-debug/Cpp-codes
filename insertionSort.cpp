#include<iostream>
using namespace std;

void insersionSort(int arr[], int n)
{
    for(int i = 1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while((temp< arr[j]) && (j>=0)){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;

        // to print each iteration
        /*for(int i = 0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;*/
    }
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    for(int i = 0 ; i<n; i++){
        cin >> arr[i];
    }

    insersionSort(arr, n);
    cout << "\nThe sorted array is \n";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
