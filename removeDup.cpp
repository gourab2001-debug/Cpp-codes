#include<iostream>
#include<string.h>
using namespace std;

string removeDup(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ros = s.substr(1);
    if(ch != ros[0]){
        return (ch+removeDup(ros));
    }
    else
        return (removeDup(ros));
}
int main(){
    string ans = removeDup("GGGGOOOOUUURRRAAB");
    cout << ans;
    return 0;
}