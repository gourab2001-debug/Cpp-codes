#include<iostream>
#include<string.h>
using namespace std;

string moveallx(string s){
    if(s.length()==0){
        return "";
    }

    char ch = s[0];
    string ros = s.substr(1);

    if(ch =='x'){
        return moveallx(ros) + ch ;
    }
    else
        return ch + moveallx(ros);
}
int main(){
    string ans = moveallx("xxxvideos");
    cout << ans << endl;
    return 0;
}