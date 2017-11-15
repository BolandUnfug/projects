#include<iostream>
using namespace std;

int main(){
	int num[10];
	int biggest=0;
	int slot;



	cout << "type 10 numbers. the biggest will be reprinted" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
for (int a = 0; a< 10; a++) 
	if (num[a] > biggest) {
		biggest = num[a];
		slot = a;
	}
	cout << biggest << " is the biggest number. it was in slot "<< slot<<"." << endl;
}
















