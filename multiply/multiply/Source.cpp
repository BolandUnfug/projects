#include<iostream>
#include<Windows.h>
using namespace std;
int multiply(int n1, int n2);
int main() {
	int number1;
	int number2;
	cout << "choose two numbers, these will be multiplied." << endl;
	cin >> number1;
	cin >> number2;
	cout << "your number is";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << "." << endl;
	cout << multiply(number1,number2) << endl;
	system("pause");
}
int multiply (int n1, int n2) {
	return (n1* n2);
}