#include<iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Enter a :";
    cin>>a;
    cout << "Enter b :";
    cin>>b;
    cout << "Enter c :";
    cin>>c;

    if(a>b && a>c) {
        cout << "a is the largest no." <<endl;
    } else if (b>c && b>a) {
        cout << "b is the largest no." <<endl;
    } else{
        cout << "c is the largest no." <<endl;
    }
    return 0;
}
