#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin>> n;

    for(int i=1; i<=n; i++){
        int j;
        for(j=1; j<=n-i; j++){ 
            cout << " ";}
        for( ; j<=n; j++){
            if((i+j)%6==0){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        for(j=n-1; j>=1; j--){
            if((i+j)%6==0){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    for(int i=n; i>=1; i--){
        int j;
        for(j=1; j<=n-i; j++){ 
            cout << " ";}
        for( ; j<=n; j++){
            if((i+j)%6==0){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        for(j=n-1; j>=1; j--){
            if((i+j)%6==0){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

   
    return 0;
}