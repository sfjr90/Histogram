#include <iostream>

using namespace std;	// Alternative "using std::cout" to avoid naming conflicts

int main() {

	int arraySize;
	cout << "Enter the size of the array: ";
	cin >> arraySize;

	int* ageArray;
	ageArray = new int[arraySize];

	for (int i = 0; i < arraySize; i++) {
		cout << "Enter age: ";
		cin >> ageArray[i];	// How to avoid overflowing and limit the age range between 0 and 99
	}

	delete[] ageArray;

}