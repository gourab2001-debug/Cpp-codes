#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s1 = "zabcaghtr";
    string s2 = "112";

    int num = stoi(s2);
    cout << num+2;

//    sort(s1.begin(), s1.end());
//    cout << s1;

    /*s1.clear();

    if(s1.empty())
        cout << "String is empty" << endl;
    else
        cout << "No not empty it is : " << s1 << endl;


    for(int i = s1.begin(); i<=s1.end(); i++){
        s2[i] = s1[i];
    }
    s2.erase(3, 3);
    cout << s2;

    int num =  s2.find("BBC") ;
    s2.erase(num, 3);

    cout << s2;
    */



    return 0;
}
