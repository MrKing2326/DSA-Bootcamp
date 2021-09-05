#include<iostream>
using namespace std;
void swap(int &x, int &y) {
	int temp;
	temp = x;
	x=y;
	y=temp;
}
int main() {
	int a;
	int b;
	cout << "Enter the first no. :";
	cin >> a;
	cout << "Enter the second no. :";
	cin >> b;

swap(a,b);

cout<<"After Swapping :" << endl;
cout<< "The First No. :"<<a<<endl;
cout<< "The Second No. :"<<b<<endl;

return 0;
}
