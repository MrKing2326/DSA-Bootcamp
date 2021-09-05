#include<iostream>
using namespace std;
int main() {
int a;
cout << "Enter the Year : " ;
cin >> a;

if (a%4==0){
    cout << "It is the Leap Year"<< endl;
} else {
    cout << "It is the Ordinary Year" <<endl;
    }
    return 0;
}
