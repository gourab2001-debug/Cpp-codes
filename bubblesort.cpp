#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

//    logic for bubble sort
    for(int j=0; j<n; j++){
            for(int i=0; i<n-j; i++){
                if(arr[i]>arr[i+1])
                    swap(&arr[i], &arr[i+1]);
    }}

    for(int i= 0; i<n; i++){
        cout << arr[i]<<"\t";
    }

    return 0;
}
