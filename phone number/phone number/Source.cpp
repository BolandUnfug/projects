#include<iostream>
using namespace std;
int main(){
	int phone[10];
	char answer;
	int retype = 2;
	while (retype != 1) {
		cout << "enter your phone number, so we can call you if you win! after each number, hit enter." << endl;
		cin >> phone[0];
		cin >> phone[1];
		cin >> phone[2];
		cin >> phone[3];
		cin >> phone[4];
		cin >> phone[5];
		cin >> phone[6];
		cin >> phone[7];
		cin >> phone[8];
		cin >> phone[9];
		cout << "is this your phone number? y=yes,n=no." << endl;
		for (int i=0; i < 10; i++) {
			cout << phone[i];
		}
		cin >> answer;
		if (answer == 'y') {
			cout << "cool, you're done with the survey, bro." << endl;
			system("pause");
			retype = 1;
		}
		else {
			cout << "this is not your phone number? please retype, then." << endl;
			retype = 2;
		}
	}
}