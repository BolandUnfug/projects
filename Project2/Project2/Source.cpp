#include<iostream>
#include<Windows.h>
#include<ctime>
using namespace std;

int main() {
	int answer=1000;
	int number;
	char playagain = 'y';
	srand(time(NULL));
	while (playagain == 'y') {
		cout << "a number has been randomly generated, ";
		int number = rand() % 100 + 1;
		while (answer != number) {
			cout << "make a guess at the number!" << endl;
			cin >> answer;
			if (answer > number) {
				cout << "Your guess is too high." << endl;
			}
			else if (answer < number) {
				cout << "Your guess is too low." << endl;

			}
			else if (answer == number) {
				cout << "You got the answer right!" << endl;

			}
		}
		cout << "do you want to play again? y/n" << endl;
		cin >> playagain;
	}
}