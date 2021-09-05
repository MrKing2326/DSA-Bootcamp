#include<iostream>
using namespace std;
int main() {
    int n, i, flag=0;
    cout << "Enter the number";
    cin >> n;

    for (i=2; i<=n/2; ++i) {
        if(n%i==0) {
            flag = 1;
            break;
        }
    }
    if(n==1) {
        cout << "1 is neither prime nor composite." <<endl;
    } else {
        if(flag == 0) {
            cout << "It is the Prime Number." <<n<<endl;
        } else {
        cout << "It is NOT the Prime Number" <<n <<endl;
            }
    }
    return 0;
}
