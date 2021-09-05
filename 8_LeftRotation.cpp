#include<iostream>
using namespace std;
int main() {
    int n=6;
    int arr[6] = {2,3,5,4,1,6};

    int left= 0;
    int right = n-1;

    while(left<=right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
