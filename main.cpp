#include <iostream>
using namespace std;	

void sumArr(const int* arrayA, const int* arrayB, int* arrayC, int size) {
	for (int i = 0; i < size; ++i) {
		arrayC[i] = arrayA[i] + arrayB[i];
	}
}
void printArr(const int* array, int size) {
	for (int i = 0; i < size; ++i) {
		cout << array[i] << " ";
	}
	cout << endl;
}
int main() {
	const int size = 5;
	int arrayA[size] = { 1, 2, 3, 4, 5 };
	int arrayB[size] = { 6, 7, 8, 9, 10 };

	int arrayC[size];

	sumArr(arrayA, arrayB, arrayC, size);

	cout << "Array A: ";
	printArr(arrayA, size);

	cout << "Array B: ";
	printArr(arrayB, size);

	cout << "Array C: ";
	printArr(arrayC, size);

	return 0;
}