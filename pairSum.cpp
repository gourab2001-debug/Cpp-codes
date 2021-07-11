#include<iostream>
using namespace std;
void insertionSort(int * arr, int n)
{
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while((temp<arr[j]) && (j>=0)){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
bool pairsum(int arr[], int n, int k)
{
    int low =0;
    int high = n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout << low << " " << high << endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int k = 30;
    insertionSort(arr, n);
    cout << pairsum(arr, n, k);
    return 0;
}
