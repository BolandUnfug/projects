#include<iostream>
#include<ctime>
#include<string>
using namespace std;
double finalscore(int TimeLeft, int Coins, int FlagPole);
string answer;
int main() {
	int flagpole;
	int coins;
	int timeleft;
	double Total;
	srand((int)time(0));
	cout << "how many coins did you get?" << endl;
	cin >> coins;
	timeleft= rand() % 300 + 100;
	cout << "it took you " << timeleft << " seconds to get to the flag." << endl;
	flagpole = rand() % 500 + 100;
	cout << "you got " << flagpole << " points from the flagpole." << endl;	
	cout << " you got " << finalscore(coins,timeleft,flagpole) << " points" << endl;
	system("pause");
	
	cout << "if you want to see the math, type math. if you want to quit, hit q. if you want to do another, say again." << endl;
	getline(cin, answer);
	getline(cin, answer);
	if (answer.compare("math") == 0) {
		cout << "take the coins, multiply by three, the time gets 5x score, and the flagpole gets no bonus" << endl;
		getline(cin, answer);
	}
	if (answer.compare("again") == 0) {
		cout << "here is another!" << endl;
	}

}
double finalscore(int TimeLeft, int Coins, int FlagPole) {
	Coins = Coins * 3;
	TimeLeft = TimeLeft * 5;
	return(Coins + TimeLeft + FlagPole);
	
}

// random for did he reach the flag no multiplier
// timer for time left 5X multiply
// input for the amount of coins 3X multiply