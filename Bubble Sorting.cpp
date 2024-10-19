#include<iostream>
using namespace std;
int main() {
	cout << "Enter the size of your array\n";
	int n;
	cin >> n;
	int* array= new int [n];
	cout << "Enter the elements of array\n";
	for (int i = 0; i < n; i++) {
		cin >> array[i];
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			if (array[j] >array[j + 1]) {
				swap(array[j], array[j + 1]);
			}
		}
	}
	cout << "The Sorted Array in Ascending Order is:\n ";

		for (int i = 0; i <n; i++) {
			cout << array[i];
			cout << " ";
		}
	
}