#include<iostream>
#include<set>
#include<cstring>
using namespace std;

bool isPresent(set<char> c, string a){
    unsigned int countval = 0;
    for (unsigned int i = 0;i < strlen(a.c_str()); i++) {
        char ca = a[i];
        if (c.count(ca)) {
        countval++;
        }
    }
    return countval == strlen(a.c_str());
}

int main(){
    std::set<std::string> dict{
        "Rat", "mat", "bat", "chat", "cat", "tab", "fab", "batt"
        };
    set<string>::iterator s;
    set<char> c;
    c.insert('t');
    c.insert('a');
    c.insert('b');
    c.insert('c');
    for (s = dict.begin(); s != dict.end(); ++s) {
        string a = *s;
        if (isPresent(c, a) == true)
            cout << a << endl;
    }
return 0;
}
