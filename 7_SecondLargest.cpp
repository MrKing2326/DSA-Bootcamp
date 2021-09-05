#include<iostream>
#include<algorithm>
using namespace std;

void SecondLargestNumber( int arr[], int arr_size) {
    int i, first, second;
    if (arr_size < 2) {
        cout << "Invalid Input" <<endl;
        return;
    }
    sort(arr, arr + arr_size);

    for(i=arr_size-2; i>=0; i--) {
        if ( arr[i] != arr[arr_size - 1]) {
            cout << "The Second largest Element is : " << arr[i]<<endl;
            return;
        }
    }
    cout << "There is no Second Largest Element" <<endl;
}

int main() {
    int arr[] = {12, 35, 1, 10, 23, 6, 14};
    int n = sizeof(arr)/sizeof(arr[0]);
    SecondLargestNumber(arr, n);
    return 0;
}


