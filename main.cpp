#include <iostream>
#include <Windows.h>
using namespace std;	

double add(double x, double y) {
	return x + y;
}
double subtract(double x, double y) {
	return x - y;
}
double multiply(double x, double y) {
	return x * y;
}
double divide(double x, double y) {
    if (y != 0) {
        return x / y;
    }
    else {
        cout << "" << endl;
        return 0.0;
    }
}
int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 11);
    double (*operations[4])(double, double) = {add, subtract, multiply, divide};
    cout << "Select an operation:\n ";
    cout << "1. Addition\n ";
    cout << "2. Subtraction\n ";
    cout << "3. Multiplication\n ";
    cout << "4. Division\n ";
    SetConsoleTextAttribute(hConsole, 7);

    int choice;
    cin >> choice;
    if (choice < 1 || choice > 4) {
        SetConsoleTextAttribute(hConsole, 12);
		cout << "Invalid choice" << endl;
        SetConsoleTextAttribute(hConsole, 7);
		return 0;
        
	}
    system("cls");
    SetConsoleTextAttribute(hConsole, 11);
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    SetConsoleTextAttribute(hConsole, 7);
    SetConsoleTextAttribute(hConsole, 10);
    double result = operations[choice - 1](num1, num2);
    cout << "Result: " << result << endl;
    SetConsoleTextAttribute(hConsole, 7);
    return 0;
}

