#include<iostream>
#include<ctime>
using namespace std;

int main() {
	system("color 17");
	srand(time(NULL));
	while (true) {
		int num = rand() % 80 + 1;
		for (int i = 0; i < num; i++) {
			cout << " ";

		}
		cout << "*" << endl;
	}
}