#include<iostream>
using namespace std;

int main() {
	int array[10];
	int count=0;
	cout << "put in your 10 numbers" << endl;
	for (int i = 0; i <= 9; i++) {
		cin >> array[i];
		if (array[i] >= 10) {
			cout << "Wow, you can type more than 10!" << endl;
			count++;
		}
		else
			cout << "No" << endl;
		if (i == 9) {
			cout << "you typed " << count << " numbers over 10!" << endl;
		}
	}
	system("pause");
}