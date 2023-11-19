#include <iostream>
#include <functional>
using namespace std;	

double Action(const int* arrayA, const int* arrayB, int size, std::function<double(int, int)> operation) {
	double result = operation (arrayA[0], arrayB[0]);

	for (int i = 1; i < size; ++i) {
		result = operation(result, arrayA[i]);
		result = operation(result, arrayB[i]);
	}
	return result;
}
double findMax(int a, int b) {
	return a > b ? a : b;
}
double findMin(int a, int b) {
	return a < b ? a : b;
}
double findAvg(int a, int b) {
	return (a + b) / 2.0;
}
int main() {
	const int size = 5;
	int arrayA[size] = { 1, 2, 3, 4, 5 };
	int arrayB[size] = { 6, 7, 8, 9, 10 };

	function<double(int, int)> operation;

	cout << "Select an operation: \n";
	cout << "1. Find max\n";
	cout << "2. Find min\n";
	cout << "3. Find avg\n";

	int choice;
	cin >> choice;

	switch (choice) {
	case 1:
		operation = findMax;
		break;
	
	case 2:
		operation = findMin;
		break;
	
	case 3:
		operation = findAvg;
		break;
	

	default:
		cout << "Invalid choice\n";
		return 1;
	}
	double result = Action(arrayA, arrayB, size, operation);
	cout << "Result: " << result << endl;

	return 0;
}