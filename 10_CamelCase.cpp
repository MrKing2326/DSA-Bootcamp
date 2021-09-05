#include<iostream>
using namespace std;

string CamelCase (string s) {
    int n = s.length();
    int index = 0;
    for(int i=0; i<n; i++) {
            //Checking white spaces
        if (s[i] == ' ' ) {
            s[i+1] = toupper(s[i+1]);
            continue;
        } else {
            //if character then copy that
            s[index++]=s[i];
         }
    }
    return s.substr(0, index);
}

int main() {
    string str = "My name is Vikas Bharti";
    cout << CamelCase(str);
    return 0;
}
