#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the marks Obtained by the student : ";
    cin >> n;

    if(n>95) {
        cout << "O Grade !!  'OUTSTANDING' " <<endl;
    } else if(n>=90) {
        cout << "A+ Grade 'EXCELLENT' "<< endl;
    }
      else if (n>=80) {
        cout << "A Grade 'VERY GOOD' " << endl;
      }
      else if (n>=70) {
        cout << "B+ Grade 'GOOD' " <<endl;
      }
      else if (n>=60) {
        cout << "B Grade 'FAIR' " <<endl;
      }
      else if (n>=40) {
        cout << "C Grade 'AVERAGE' "<< endl;
    } else {
        cout << "D Grade 'WORK HARD' "<< endl;
    }
    return 0;
}
