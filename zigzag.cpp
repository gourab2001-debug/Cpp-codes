#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    cout<< "Enter the numbers of stars to be printed: ";
    cin>> n;

    for(i=1; i<=3; i++){
        for(j=1; j<=n; j++){
            if(((i+j)%4==0) || (j%4==0 && (i+j)%2==0)){
                cout << "* ";
            }
            else{
                cout<< "  ";
            }
        }
        cout<<endl;
    }

    return 0;
}