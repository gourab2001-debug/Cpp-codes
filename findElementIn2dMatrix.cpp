#include<iostream>
using namespace std;

int main()
{
    int r, c;
    int target;
    cout << "Enter the no of rows and cols: ";
    cin >> r >> c;
    cout << "Enter the target elements: ";
    cin >> target;
    int arr[r][c];
    cout <<  "Enter the elements in the array: \n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++)
            cin >> arr[i][j];
    }

    //assume that the array is sorted in both rows and columns
    int frow = 0;
    int fcol = c-1;
    int start = arr[frow][fcol];
    bool found = false;
    while(fcol>=0 && frow <= r-1){
        if(arr[frow][fcol]==target){
            cout << arr[frow][fcol] << endl;
            found = true;
            break;
        }
        else if(arr[frow][fcol]<target)
            fcol++;
        else
            frow--;

    }
    if(found)
        cout << "Element found";
    else
        cout << "Not found";
    return 0;
}
