#include<iostream>
#include<Windows.h>
using namespace std;

int main() {
	int b;
	cout << "how many burps have you done today?" << endl;
	cin >> b;
	cout << "you will get your " << b << " burps !" << endl;

	for (int i = b; i > 0; i--) {
		PlaySound(TEXT("belch.wav"), NULL, SND_FILENAME);
	}
}