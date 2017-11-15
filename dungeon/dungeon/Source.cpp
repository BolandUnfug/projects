#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <windows.h>
using namespace std;
//////////////////////////////////
//PLEASE WRITE NOTES OF BUGS//////
//////////////////////////////////
//general
int health = 200;
int item;
int monster;
string itemList[5] = { "iron sword", "bone knife", "diamond sword", "flimsy bow", "steel bow" };
string invread = "empty";
string inv[5]{ "empty","empty","empty","empty","empty" };
string shop[5]{ "empty","empty","empty","empty","empty" };
string playagain="yes";
int dungeonmake = 1;
string answer;
string quit;
//attacking
char attack;
int damage = 100;
int frozen;
int monsterdamage;
int monsterhealth;
//weapons
int freezable;
int randfrozen;
//shop
int gold = 0;
int shopitems;
int shopitemnumber;
int shopagain;
//voids
void monstermaker();
void dungeonmaker();
void slimebattle();
void skeletonbattle();
void zombiebattle();
void frostkingbattle();
int main() {

	while (playagain.compare("yes") || playagain.compare("Yes") || playagain.compare("y") || playagain.compare("Y")) {
		srand((int)time(0));
		cout << "          >_________________________________" << endl;
		cout << "[########[]_________________________________>" << endl;
		cout << "this a dungeon of ever changing rooms that you must enter to appease the gods." << endl;

		cout << "inside, you will find monsters, loot, and glory, and maybe even a secret." << endl;
		cout << "you can check all of your info by typing info." << endl;
		cout << "in the first room..." << endl;
		
		dungeonmake = 1;

		while (dungeonmake == 1) {
			getline(cin, answer);
			if (answer.compare("Info") == 0 || answer.compare("info") == 0 || answer.compare("I") == 0 || answer.compare("i") == 0) {
				cout << "inventory:" << endl;
				cout << "1.) " << inv[0] << endl;
				cout << "2.) " << inv[1] << endl;
				cout << "3.) " << inv[2] << endl;
				cout << "4.) " << inv[3] << endl;
				cout << "5.) " << inv[4] << endl;
				cout << "gold: " << gold << endl;
				cout << "total damage: " << damage << endl;
			}
			cout << " " << endl;
			Sleep(2000);
			dungeonmaker();
		}
	}
}




//DUNGEON MAKER
///////////////////////////////////////////////////
void dungeonmaker() {

	int dungeonchance = rand() % 100 + 1;



	if (dungeonchance >= 0 && dungeonchance <= 59) {
		cout << "this room has a monster in it." << endl;
		cout << " " << endl;
		monstermaker();
	}


	//SHOP
	////////////////////////////////////////////////

	else if (dungeonchance >= 60 && dungeonchance <= 65) {
		cout << "this one has a trader." << endl;
		cout << " " << endl;
		cout << "do you want to buy or sell?" << endl;
		getline(cin, answer);
		if (answer.compare("B") == 0 || answer.compare("b") == 0 || answer.compare("Buy") == 0 || answer.compare("buy") == 0) {
			cout << "what do you want to buy? you can type q to quit." << endl;
			while (quit.compare("q") == 0 || quit.compare("Q") == 0 || quit.compare("quit") == 0 || quit.compare("Quit") == 0) {
				cout << "you have " << gold << " gold!" << endl;
				cout << "the shop inventory:" << endl;
				for (int i = 0; i <= 5; i++) {
					itemList[rand() % 5];
					cout << i << ".)" << itemList[i];
					if (itemList[i].compare("bone knife")) {
						cout << ", deals 20 damage and costs 40 gold." << endl;
					}
					if (itemList[i].compare("iron sword")) {
						cout << ", deals 40 damage and costs 80 gold." << endl;
					}
					if (itemList[i].compare("diamond sword")) {
						cout << ", deals 100 damage and costs 200 gold." << endl;
					}
					if (itemList[i].compare("flimsy bow")) {
						cout << ", deals 30 damage and costs 60 gold." << endl;
					}
					if (itemList[i].compare("steel bow")) {
						cout << ", deals 50 damage and costs 100 gold." << endl;
					}
					if (i == 5) {
						cout << "type the number of the item you want to buy." << endl;
						if (inv[1].compare("bone knife") == 0) {
							if (gold == 40) {
								damage = damage + 20;
								cout << "you bought the bone kife" << endl;
								if (!inv[0].compare(invread)) {
									inv[0] = "bone knife";
								}
								else if (!inv[1].compare(invread)) {
									inv[1] = "bone knife";
								}
								else if (!inv[2].compare(invread)) {
									inv[2] = "bone knife";
								}
								else if (!inv[3].compare(invread)) {
									inv[3] = "bine knife";
								}
								else if (!inv[4].compare(invread)) {
									inv[4] = "bone knife";
								}
							}
						}
						if (inv[1].compare("iron sword") == 0) {
							if (gold == 80) {
								damage = damage + 40;
								cout << "you bought the iron sword" << endl;
								if (!inv[0].compare(invread)) {
									inv[0] = "iron sword";
								}
								else if (!inv[1].compare(invread)) {
									inv[1] = "iron sword";
								}
								else if (!inv[2].compare(invread)) {
									inv[2] = "iron sword";
								}
								else if (!inv[3].compare(invread)) {
									inv[3] = "iron sword";
								}
								else if (!inv[4].compare(invread)) {
									inv[4] = "iron sword";
								}
							}
						}
						if (inv[1].compare("diamond sword") == 0) {
							if (gold == 200) {
								cout << "you bought the diamond sword" << endl;
								damage = damage + 100;
								if (!inv[0].compare(invread)) {
									inv[0] = "diamond sword";
								}
								else if (!inv[1].compare(invread)) {
									inv[1] = "diamond sword";
								}
								else if (!inv[2].compare(invread)) {
									inv[2] = "diamond sword";
								}
								else if (!inv[3].compare(invread)) {
									inv[3] = "diamond sword";
								}
								else if (!inv[4].compare(invread)) {
									inv[4] = "diamond sword";
								}
							}
						}
						if (inv[1].compare("flimsy bow") == 0) {
							if (gold == 60) {
								damage = damage + 30;
								cout << "you bought the flimsy bow" << endl;
								if (!inv[0].compare(invread)) {
									inv[0] = "flimsy bow";
								}
								else if (!inv[1].compare(invread)) {
									inv[1] == "flimsy bow";
								}
								else if (!inv[2].compare(invread)) {
									inv[2] = "flimsy bow";
								}
								else if (!inv[3].compare(invread)) {
									inv[3] = "flimsy bow";
								}
								else if (!inv[4].compare(invread)) {
									inv[4] = "flimsy bow";
								}
							}
						}
						if (inv[1].compare("steel bow") == 0) {
							if (gold == 100) {
								cout << "you bought the steel bow" << endl;
								damage=damage + 50;
								if (!inv[0].compare(invread)) {
									inv[0] = "steel bow";
								}
								else if (!inv[1].compare(invread)) {
									inv[1] == "steel bow";
								}
								else if (!inv[2].compare(invread)) {
									inv[2] = "steel bow";
								}
								else if (!inv[3].compare(invread)) {
									inv[3] = "steel bow";
								}
								else if (!inv[4].compare(invread)) {
									inv[4] = "steel bow";
								}
							}
						}

					}
				}
			}
		}
				
					
				
				
		else if (answer.compare("S") == 0 || answer.compare("s") == 0 || answer.compare("Sell") == 0 || answer.compare("sell") == 0) {

			cout << "here is your inventory. type the number " << endl;
			cout << "1.) " << inv[0] << endl;
			cout << "2.) " << inv[1] << endl;
			cout << "3.) " << inv[2] << endl;
			cout << "4.) " << inv[3] << endl;
			cout << "5.) " << inv[4] << endl;
			cout << "which do you want to sell? you can type q to quit." << endl;
			getline(cin, answer);
			while (!quit.compare("q") || !quit.compare("Q") || !quit.compare("quit") || !quit.compare("Quit")) {
				if (answer.compare("1") == 0 || answer.compare("one") == 0 || answer.compare("One") == 0) {
					if (!inv[0].compare("bone knife")) {
						cout << "you get 20 gold." << endl;
						gold = gold + 20;
						damage = damage -20;
						inv[0] = "empty";
					}
					if (!inv[0].compare("iron sword")) {
						cout << "you get 40 gold." << endl;
						gold = gold + 40;
						damage = damage - 40;
						inv[0] = "empty";
					}
					if (!inv[0].compare("diamond sword")) {
						cout << "you get 100 gold." << endl;
						gold = gold + 100;
						damage = damage - 100;
						inv[0] = "empty";
					}
					if (!inv[0].compare("flimsy bow")) {
						cout << "you get 30 gold." << endl;
						gold = gold + 30;
						damage = damage - 30;
						inv[0] = "empty";
					}
					if (!inv[0].compare("steel bow")) {
						cout << "you get 50 gold." << endl;
						gold = gold + 50;
						damage = damage - 50;
						inv[0] = "empty";
					}

				}
				if (answer.compare("2") == 0 || answer.compare("two") == 0 || answer.compare("Two") == 0) {
					if (!inv[1].compare("bone knife")) {
						cout << "you get 20 gold." << endl;
						gold = gold + 20;
						damage = damage - 20;
						inv[1] = "empty";
					}
					if (!inv[1].compare("iron sword")) {
						cout << "you get 40 gold." << endl;
						gold = gold + 40;
						damage = damage - 40;
						inv[1] = "empty";
					}
					if (!inv[1].compare("diamond sword")) {
						cout << "you get 100 gold." << endl;
						gold = gold + 100;
						damage = damage - 100;
						inv[1] = "empty";
					}
					if (!inv[1].compare("flimsy bow")) {
						cout << "you get 30 gold." << endl;
						gold = gold + 30;
						damage = damage - 30;
						inv[1] = "empty";
					}
					if (!inv[1].compare("steel bow")) {
						cout << "you get 50 gold." << endl;
						gold = gold + 50;
						damage = damage - 50;
						inv[1] = "empty";
					}
				}
				if (answer.compare("3") == 0 || answer.compare("three") == 0 || answer.compare("Three") == 0) {
					if (!inv[2].compare("bone knife")) {
						cout << "you get 20 gold." << endl;
						gold = gold + 20;
						damage = damage - 20;
						inv[2] = "empty";
					}
					if (!inv[2].compare("iron sword")) {
						cout << "you get 40 gold." << endl;
						gold = gold + 40;
						damage = damage - 40;
						inv[2] = "empty";
					}
					if (!inv[2].compare("diamond sword")) {
						cout << "you get 100 gold." << endl;
						gold = gold + 100;
						damage = damage - 100;
						inv[2] = "empty";
					}
					if (!inv[2].compare("flimsy bow")) {
						cout << "you get 30 gold." << endl;
						gold = gold + 30;
						damage = damage - 30;
						inv[2] = "empty";
					}
					if (!inv[2].compare("steel bow")) {
						cout << "you get 50 gold." << endl;
						gold = gold + 50;
						damage = damage - 50;
						inv[2] = "empty";
					}
				}
				if (answer.compare("4") == 0 || answer.compare("four") == 0 || answer.compare("Four") == 0) {
					if (!inv[3].compare("bone knife")) {
						cout << "you get 20 gold." << endl;
						gold = gold + 20;
						damage = damage - 20;
						inv[3] = "empty";
					}
					if (!inv[3].compare("iron sword")) {
						cout << "you get 40 gold." << endl;
						gold = gold + 40;
						damage = damage - 40;
						inv[3] = "empty";
					}
					if (!inv[3].compare("diamond sword")) {
						cout << "you get 100 gold." << endl;
						gold = gold + 100;
						damage = damage - 100;
						inv[3] = "empty";
					}
					if (!inv[3].compare("flimsy bow")) {
						cout << "you get 30 gold." << endl;
						gold = gold + 30;
						damage = damage - 30;
						inv[3] = "empty";
					}
					if (!inv[3].compare("steel bow")) {
						cout << "you get 50 gold." << endl;
						gold = gold + 50;
						damage = damage - 50;
						inv[3] = "empty";
					}
				}
				if (answer.compare("5") == 0 || answer.compare("five") == 0 || answer.compare("Five") == 0) {
					if (!inv[4].compare("bone knife")) {
						cout << "you get 20 gold." << endl;
						gold = gold + 20;
						damage = damage - 20;
						inv[4] = "empty";
					}
					if (!inv[4].compare("iron sword")) {
						cout << "you get 40 gold." << endl;
						gold = gold + 40;
						damage = damage - 40;
						inv[4] = "empty";
					}
					if (!inv[4].compare("diamond sword")) {
						cout << "you get 100 gold." << endl;
						gold = gold + 100;
						damage = damage - 100;
						inv[4] = "empty";
					}
					if (!inv[4].compare("flimsy bow")) {
						cout << "you get 30 gold." << endl;
						gold = gold + 30;
						damage = damage - 30;
						inv[4] = "empty";
					}
					if (!inv[4].compare("steel bow")) {
						cout << "you get 50 gold." << endl;
						gold = gold + 50;
						damage = damage - 50;
						inv[4] = "empty";
					}
				}
				else {
					cout << "that is not a thing..." << endl;
				}
			}
		}
	}



	//POTIONS
	/////////////////////////////////////////////
	else if (dungeonchance >= 66 && dungeonchance <= 83) {

		cout << " " << endl;
		cout << "you found a bubbling pot. drink the contents?" << endl;
		getline(cin, answer);
		if (answer.compare("Yes") == 0 || answer.compare("yes") == 0 || answer.compare("Y") == 0 || answer.compare("y") == 0) {
			cout << " " << endl;
			int potionchance = rand() % 2;
			if (potionchance == 0) {
				cout << "you got a health potion you recovered 500 health!" << endl;
				health = health + 500;
				dungeonmaker();

			}
			if (potionchance == 1) {
				cout << " you got a poison potion! you lost 250 health!" << endl;
				health = health - 250;
				dungeonmaker();

			}
		}
		else {
			cout << " " << endl;
			cout << "you turn around and go into a new room" << endl;
			dungeonmaker();
		}
	}


	//TREASURE
	//////////////////////////////////////////////////////////
	else if (dungeonchance > 84 && dungeonchance <= 89) {
		cout << "you found a treasure room! you got 100 gold and the diamond sword" << endl;
		damage = damage + 100;
		gold = gold + 100;
		if (!inv[0].compare(invread)) {
			inv[0] = "diamond sword";
		}
		else if (!inv[1].compare(invread)) {
			inv[1] = "diamond sword";
		}
		else if (!inv[2].compare(invread)) {
			inv[2] = "diamond sword";
		}
		else if (!inv[3].compare(invread)) {
			inv[3] = "diamond sword";
		}
		else if (!inv[4].compare(invread)) {
			inv[4] = "diamond sword";
		}
	}
	//TREASURE CHEST
	/////////////////////////////////////////////////////////
	else if (dungeonchance > 89 && dungeonchance <= 99) {
		cout << "you found a treasure chest." << endl;
		int treasurechance = rand() % 100 + 1;
		if (treasurechance >= 0 && treasurechance <= 32) {
			cout << "you found the steel bow. damage + 50." << endl;
			damage = damage + 50;
			if (!inv[0].compare(invread)) {
				inv[0] = "steel bow";
			}
			else if (!inv[1].compare(invread)) {
				inv[1] = "steel bow";
			}
			else if (!inv[2].compare(invread)) {
				inv[2] = "steel bow";
			}
			else if (!inv[3].compare(invread)) {
				inv[3] = "steel bow";
			}
			else if (!inv[4].compare(invread)) {
				inv[4] = "steel bow";
			}
		}
		if (treasurechance >= 33 && treasurechance <= 65) {
			cout << "you found the flimsy bow. damage + 30" << endl;
			damage = damage + 30;
			if (!inv[0].compare(invread)) {
				inv[0] = "flimsy bow";
			}
			else if (!inv[1].compare(invread)) {
				inv[1] = "flimsy bow";
			}
			else if (!inv[2].compare(invread)) {
				inv[2] = "flimsy bow";
			}
			else if (!inv[3].compare(invread)) {
				inv[3] = "flimsy bow";
			}
			else if (!inv[4].compare(invread)) {
				inv[4] = "flimsy bow";
			}
		}
		if (treasurechance >= 66 && treasurechance <= 99) {
			cout << "you found the iron sword, damage + 40." << endl;
			damage = damage + 40;
			if (!inv[0].compare(invread)) {
				inv[0] = "iron sword";
			}
			else if (!inv[1].compare(invread)) {
				inv[1] = "iron sword";
			}
			else if (!inv[2].compare(invread)) {
				inv[2] = "iron sword";
			}
			else if (!inv[3].compare(invread)) {
				inv[3] = "iron sword";
			}
			else if (!inv[4].compare(invread)) {
				inv[4] = "iron sword";
			}
			if (treasurechance == 100) {
				cout << "you found the bone knife, damage + 20 ." << endl;
				damage = damage + 20;
				if (!inv[0].compare(invread)) {
					inv[0] = "bone knife";
				}
				else if (!inv[1].compare(invread)) {
					inv[1] = "bone knife";
				}
				else if (!inv[2].compare(invread)) {
					inv[2] = "bone knife";
				}
				else if (!inv[3].compare(invread)) {
					inv[3] = "bone knife";
				}
				else if (!inv[4].compare(invread)) {
					inv[4] = "bone knife";
				}
				dungeonmaker();
			}
			getline(cin, answer);
			if (answer.compare("Info") == 0 || answer.compare("info") == 0 || answer.compare("I") == 0 || answer.compare("i") == 0) {
				cout << "inventory:" << endl;
				cout << "1.) " << inv[0] << endl;
				cout << "2.) " << inv[1] << endl;
				cout << "3.) " << inv[2] << endl;
				cout << "4.) " << inv[3] << endl;
				cout << "5.) " << inv[4] << endl;
				cout << "gold: " << gold << endl;
				cout << "total damage: " << damage << endl;
				dungeonmaker();
			}
		}
	}


	//EXIT
	///////////////////////////////////////////////////////
	else if (dungeonchance == 100) {
		cout << "you found a secret room! you found the exit!." << endl;
		cout << "do you leave or go back in to the dungeon? warning! this is a 1/100 chance, dont mess it up." << endl;
		getline(cin, answer);
		if (answer.compare("L") == 0 || answer.compare("l") == 0 || answer.compare("leave") == 0 || answer.compare("Leave") == 0) {
			cout << "are you SURE you want to go back to the dungeon." << endl;
			getline(cin, answer);
			if (answer.compare("L") == 0 || answer.compare("l") == 0 || answer.compare("leave") == 0 || answer.compare("Leave") == 0) {
				cout << "are you SURE SURE you want to go back." << endl;
				getline(cin, answer);
				if (answer.compare("L") == 0 || answer.compare("l") == 0 || answer.compare("leave") == 0 || answer.compare("Leave") == 0) {
					cout << "*sigh* fine." << endl;
					dungeonmaker();
				}
				else {
					cout << "you left the dungeon! the clan welcomes you back as a hero!" << endl;
				}
			}
			else {
				cout << "you left the dungeon! the clan welcomes you back as a hero!" << endl;
			}
		}
		else {
			cout << "you left the dungeon! the clan welcomes you back as a hero!" << endl;
		}


	}
}










		//MONSTER CHOOSER
		///////////////////////////////////////////////////////////
	void monstermaker() {

			int monsterchance = (rand() % 100) + 1;
			if (monsterchance <= 33 && monsterchance >= 0) {
				cout << "you encountered a slime! it has 50 attack and 300 health, but destroys your weapon." << endl;
				monsterdamage = 100;
				cout << "do you attack, or run?" << endl;
				getline(cin, answer);
				if (answer.compare("Info") == 0 || answer.compare("info") == 0 || answer.compare("I") == 0 || answer.compare("i") == 0) {
					cout << "inventory:" << endl;
					cout << "1.) " << inv[0] << endl;
					cout << "2.) " << inv[1] << endl;
					cout << "3.) " << inv[2] << endl;
					cout << "4.) " << inv[3] << endl;
					cout << "5.) " << inv[4] << endl;
					cout << "gold: " << gold << endl;
					cout << "total damage: " << damage << endl;
					getline(cin, answer);
				}
				if (answer.compare("Run") == 0 || answer.compare("run") == 0 || answer.compare("r") == 0 || answer.compare("R") == 0) {
					cout << "as you run, the slime deals 100 damage at your back." << endl;
					
					health = health - 100;
					dungeonmaker();
				}
				else if (answer.compare("A") == 0 || answer.compare("a") == 0 || answer.compare("attack") == 0 || answer.compare("Attack") == 0) {
					
					slimebattle();
				}
			}




			else if (monsterchance <= 66 && monsterchance >= 34) {
				cout << "you ran into a skeleton. it has 100 attack and 500 health." << endl;
				cout << "do you attack, or run?" << endl;
				if (answer.compare("Info") == 0 || answer.compare("info") == 0 || answer.compare("I") == 0 || answer.compare("i") == 0) {
					cout << "inventory:" << endl;
					cout << "1.) " << inv[0] << endl;
					cout << "2.) " << inv[1] << endl;
					cout << "3.) " << inv[2] << endl;
					cout << "4.) " << inv[3] << endl;
					cout << "5.) " << inv[4] << endl;
					cout << "gold: " << gold << endl;
					cout << "total damage: " << damage << endl;
					getline(cin, answer);
				}
				getline(cin, answer);
				if (answer.compare("Run") == 0 || answer.compare("run") == 0 || answer.compare("r") == 0 || answer.compare("R") == 0) {
					cout << "as you run, the skeleton deals 100 damage at your back." << endl;
					health = health - 100;
					dungeonmaker();

				}
				else if (answer.compare("A") == 0 || answer.compare("a") == 0 || answer.compare("attack") == 0 || answer.compare("Attack") == 0) {
					skeletonbattle();
				}
				

			}



			if (monsterchance <= 99 && monsterchance >= 67) {
				cout << "you found a zombie. it has 100 attack and 500 health." << endl;
				cout << "do you attack, or run?" << endl;
				if (answer.compare("Info") == 0 || answer.compare("info") == 0 || answer.compare("I") == 0 || answer.compare("i") == 0) {
					cout << "inventory:" << endl;
					cout << "1.) " << inv[0] << endl;
					cout << "2.) " << inv[1] << endl;
					cout << "3.) " << inv[2] << endl;
					cout << "4.) " << inv[3] << endl;
					cout << "5.) " << inv[4] << endl;
					cout << "gold: " << gold << endl;
					cout << "total damage: " << damage << endl;
					getline(cin, answer);
				}
				getline(cin, answer);
				if (answer.compare("Run") == 0 || answer.compare("run") == 0 || answer.compare("r") == 0 || answer.compare("R") == 0) {
					cout << "as you run, the zombie deals 100 damage at your back." << endl;
					health = health - 100;
					dungeonmaker();
				}
				else if (answer.compare("A") == 0 || answer.compare("a") == 0 || answer.compare("attack") == 0 || answer.compare("Attack") == 0) {
					zombiebattle();
				}
			}




			if (monsterchance == 100) {
				cout << "Boss battle! you found the frost king! he deals 200 damage, and has 2000 health, and can freeze you! good luck..." << endl;
				cout << "do you attack, or run?" << endl;
				getline(cin, answer);
				if (answer.compare("Info") == 0 || answer.compare("info") == 0 || answer.compare("I") == 0 || answer.compare("i") == 0) {
					cout << "inventory:" << endl;
					cout << "1.) " << inv[0] << endl;
					cout << "2.) " << inv[1] << endl;
					cout << "3.) " << inv[2] << endl;
					cout << "4.) " << inv[3] << endl;
					cout << "5.) " << inv[4] << endl;
					cout << "gold: " << gold << endl;
					cout << "total damage: " << damage << endl;
					getline(cin, answer);
				}
				if (answer.compare("Run") == 0 || answer.compare("run") == 0 || answer.compare("r") == 0 || answer.compare("R") == 0) {
					cout << "as you run, the skeleton deals 100 damage at your back." << endl;
					health = health - 100;
					dungeonmaker();
				}
				else if (answer.compare("A") == 0 || answer.compare("a") == 0 || answer.compare("attack") == 0 || answer.compare("Attack") == 0) {
					frostkingbattle();
				}
			}
		}







		//SLIME FIGHT
	/////////////////////////////////////////////////////
	void slimebattle() {
			cout << "you have begun the battle!" << endl;
			monsterhealth = 300;
			monsterdamage = 50;
			int chance = (rand() % 100) + 1;
			if (chance >= 50) {
				cout << "you get to go first." << endl;
			}
			else {
				cout << "the slime goes first!" << endl;
				cout << "the monster deals " << monsterdamage << " to you! you lose your weapon!" << endl;
				health = health - monsterdamage;
				int destroyweapon = (rand() % 5) + 1;
				if (destroyweapon == 1) {
					cout << "you lost your " << inv[0] << endl;
					if (!inv[0].compare("bone knife")) {

						damage = damage - 20;
						inv[0] = "empty";
					}
					if (!inv[0].compare("iron sword")) {
						
						damage = damage - 40;
						inv[0] = "empty";
					}
					if (!inv[0].compare("diamond sword")) {
						cout << "you get 100 gold." << endl;
						
						inv[0] = "empty";
					}
					if (!inv[0].compare("flimsy bow")) {
						cout << "you get 30 gold." << endl;
						
						inv[0] = "empty";
					}
					if (!inv[0].compare("steel bow")) {
						cout << "you get 50 gold." << endl;
						
						inv[0] = "empty";
					}

					//scan for item, change it according to item
				}
				if (destroyweapon == 2) {
					cout << "you lost your " << inv[1] << endl;
					if (!inv[1].compare("bone knife")) {

						damage = damage - 20;
						inv[1] = "empty";
					}
					if (!inv[1].compare("iron sword")) {

						damage = damage - 40;
						inv[1] = "empty";
					}
					if (!inv[1].compare("diamond sword")) {
						cout << "you get 100 gold." << endl;

						inv[1] = "empty";
					}
					if (!inv[1].compare("flimsy bow")) {
						cout << "you get 30 gold." << endl;

						inv[1] = "empty";
					}
					if (!inv[1].compare("steel bow")) {
						cout << "you get 50 gold." << endl;

						inv[1] = "empty";
					}
				}
				if (destroyweapon == 3) {
					cout << "you lost your " << inv[2] << endl;
					if (!inv[2].compare("bone knife")) {

						damage = damage - 20;
						inv[2] = "empty";
					}
					if (!inv[2].compare("iron sword")) {

						damage = damage - 40;
						inv[2] = "empty";
					}
					if (!inv[2].compare("diamond sword")) {
						cout << "you get 100 gold." << endl;

						inv[2] = "empty";
					}
					if (!inv[2].compare("flimsy bow")) {
						cout << "you get 30 gold." << endl;

						inv[2] = "empty";
					}
					if (!inv[2].compare("steel bow")) {
						cout << "you get 50 gold." << endl;

						inv[2] = "empty";
					}
				}
				if (destroyweapon == 4) {
					cout << "you lost your " << inv[3] << endl;
					if (!inv[3].compare("bone knife")) {

						damage = damage - 20;
						inv[3] = "empty";
					}
					if (!inv[3].compare("iron sword")) {

						damage = damage - 40;
						inv[3] = "empty";
					}
					if (!inv[3].compare("diamond sword")) {
						cout << "you get 100 gold." << endl;

						inv[3] = "empty";
					}
					if (!inv[3].compare("flimsy bow")) {
						cout << "you get 30 gold." << endl;

						inv[3] = "empty";
					}
					if (!inv[3].compare("steel bow")) {
						cout << "you get 50 gold." << endl;

						inv[3] = "empty";
					}
				}
				if (destroyweapon == 5) {
					cout << "you lost your " << inv[4] << endl;
					if (!inv[0].compare("bone knife")) {

						damage = damage - 20;
						inv[4] = "empty";
					}
					if (!inv[4].compare("iron sword")) {

						damage = damage - 40;
						inv[4] = "empty";
					}
					if (!inv[4].compare("diamond sword")) {
						cout << "you get 100 gold." << endl;

						inv[4] = "empty";
					}
					if (!inv[4].compare("flimsy bow")) {
						cout << "you get 30 gold." << endl;

						inv[4] = "empty";
					}
					if (!inv[4].compare("steel bow")) {
						cout << "you get 50 gold." << endl;

						inv[4] = "empty";
					}
				}
				cout << "you have " << health << " left" << endl;
			}
			while (health >1) {
				while (monsterhealth >1) {
					cout << "do you attack? attacking deals damage which is " << damage <<"."<< endl;
					getline(cin, answer);
					if (answer.compare("Info") == 0 || answer.compare("info") == 0 || answer.compare("I") == 0 || answer.compare("i") == 0) {
						cout << "inventory:" << endl;
						cout << "1.) " << inv[0] << endl;
						cout << "2.) " << inv[1] << endl;
						cout << "3.) " << inv[2] << endl;
						cout << "4.) " << inv[3] << endl;
						cout << "5.) " << inv[4] << endl;
						cout << "gold: " << gold << endl;
						cout << "total damage: " << damage << endl;
						getline(cin, answer);
					}
					if (answer.compare("A") == 0 || answer.compare("a") == 0 || answer.compare("Attack") == 0 || answer.compare("attack") == 0) {
						cout << "you deal " << damage << " damage to the slime! " << endl;
						monsterhealth = monsterhealth - damage;
						cout << "the slime has " << monsterhealth << " life left!" << endl;
					}
					
					else {
						cout << "you did nothing... why?" << endl;
					}
					cout << "the monster deals " << monsterdamage << " to you!" << endl;
					health = health - monsterdamage;
					cout << "you have " << health << " health left!" << endl;
				}
				if (monsterhealth <= 0) {
					cout << "you won the battle! on to the next dungeon. you get 15 gold and the iron sword. damage +4." << endl;
					gold = gold + 15;
					damage = damage + 40;
					if (!inv[0].compare(invread)) {
						inv[0] = "iron sword";
					}
					else if (!inv[1].compare(invread)) {
						inv[1] = "iron sword";
					}
					else if (!inv[2].compare(invread)) {
						inv[2] = "iron sword";
					}
					else if (!inv[3].compare(invread)) {
						inv[3] = "iron sword";
					}
					else if (!inv[4].compare(invread)) {
						inv[4] = "iron sword";
					}

				}
				dungeonmaker();
			}

			if (health <= 0) {
				cout << "you lost the game!" << endl;
				cout << "do you want to go again?" << endl;
				getline(cin, answer);
				if (answer.compare("yes") || answer.compare("Yes") || answer.compare("y") || answer.compare("Y")) {
					playagain = "yes";
				}
				else {
					cout << "game over! press any key to leave." << endl;
					system("sleep");
				}
			}
		}





	//SKELETON BATTLE
	////////////////////////////////////////////////
	void skeletonbattle() {
		cout << "you have begun the battle!" << endl;
		monsterhealth = 500;
		monsterdamage = 100;
		int chance = (rand() % 100) + 1;
		if (chance >= 50) {
			cout << "you get to go first." << endl;
		}
		else {
			cout << "the skeleton goes first!" << endl;
			cout << "the monster deals " << monsterdamage << " to you!" << endl;
			health = health - monsterdamage;
			cout << "you have " << health << " left" << endl;
		}
		while (health >1) {
			while (monsterhealth >1) {
				cout << "do you attack? attacking deals damage which is " << damage << "." << endl;
				getline(cin, answer);
				if (answer.compare("Info") == 0 || answer.compare("info") == 0 || answer.compare("I") == 0 || answer.compare("i") == 0) {
					cout << "inventory:" << endl;
					cout << "1.) " << inv[0] << endl;
					cout << "2.) " << inv[1] << endl;
					cout << "3.) " << inv[2] << endl;
					cout << "4.) " << inv[3] << endl;
					cout << "5.) " << inv[4] << endl;
					cout << "gold: " << gold << endl;
					cout << "total damage: " << damage << endl;
					getline(cin, answer);
				}
				if (answer.compare("A") == 0 || answer.compare("a") == 0 || answer.compare("Attack") == 0 || answer.compare("attack") == 0) {
					cout << "you deal " << damage << " damage to the skeleton! " << endl;
					monsterhealth = monsterhealth - damage;
					cout << "the skeleton has " << monsterhealth << " health left!" << endl;
				}
			
				else {
					cout << "you did nothing... why?" << endl;
				}
				cout << "the monster deals " << monsterdamage << " to you!" << endl;
				health = health - monsterdamage;
				cout << "you have " << health << " health left!" << endl;
			}
			if (monsterhealth <= 0) {
				cout << "you won the battle! on to the next dungeon. you get 20 gold and the bone knife. damage +20." << endl;
				gold = gold + 20;
				damage = damage + 20;
				if (!inv[0].compare(invread)) {
					inv[0] = "bone knife";
				}
				else if (!inv[1].compare(invread)) {
					inv[1] = "bone knife";
				}
				else if (!inv[2].compare(invread)) {
					inv[2] = "bone knife";
				}
				else if (!inv[3].compare(invread)) {
					inv[3] = "bone knife";
				}
				else if (!inv[4].compare(invread)) {
					inv[4] = "bone knife";
				}
			}
			dungeonmaker();
		}

		if (health <= 0) {
			cout << "you lost the game!" << endl;
			cout << "do you want to go again?" << endl;
			getline(cin, answer);
			if (answer.compare("yes") || answer.compare("Yes") || answer.compare("y") || answer.compare("Y")) {
				playagain = "yes";
			}
			else {
				cout << "game over! press any key to leave." << endl;
				system("sleep");
			}
		}
	}
	//ZOMBIE BATTLE
	////////////////////////////////////////////////
	void zombiebattle() {
		cout << "you have begun the battle!" << endl;
		monsterhealth = 500;
		monsterdamage = 100;
		int chance = (rand() % 100) + 1;
		if (chance >= 50) {
			cout << "you get to go first." << endl;
		}
		else {
			cout << "the zombie goes first!" << endl;
			cout << "the monster deals " << monsterdamage << " to you!" << endl;
			health = health - monsterdamage;
			cout << "you have " << health << " left" << endl;
		}
		while (health >1) {
			while (monsterhealth > 1) {
				cout << "do you attack? attacking deals damage which is "<<damage << "." << endl;
				getline(cin, answer);
				if (answer.compare("Info") == 0 || answer.compare("info") == 0 || answer.compare("I") == 0 || answer.compare("i") == 0) {
					cout << "inventory:" << endl;
					cout << "1.) " << inv[0] << endl;
					cout << "2.) " << inv[1] << endl;
					cout << "3.) " << inv[2] << endl;
					cout << "4.) " << inv[3] << endl;
					cout << "5.) " << inv[4] << endl;
					cout << "gold: " << gold << endl;
					cout << "total damage: " << damage << endl;
					getline(cin, answer);
				}
				if (answer.compare("A") == 0 || answer.compare("a") == 0 || answer.compare("Attack") == 0 || answer.compare("attack") == 0) {
					cout << "you deal " << damage << " damage to the zombie! " << endl;
					monsterhealth = monsterhealth - damage;
					cout << "the zombie has " << monsterhealth << " life left!" << endl;
				}
				else {
					cout << "you did nothing... why?" << endl;
				}
				cout << "the monster deals " << monsterdamage << " to you!" << endl;
				health = health - monsterdamage;
				cout << "you have " << health << " health left!" << endl;
			}
			if (monsterhealth <= 0) {
				cout << "you won the battle! on to the next dungeon. you get 25 gold." << endl;
				gold = gold + 25;
			}
			dungeonmaker();
		}

		if (health <= 0) {
			cout << "you lost the game!" << endl;
			cout << "do you want to go again?" << endl;
			getline(cin, answer);
			if (answer.compare("yes") || answer.compare("Yes") || answer.compare("y") || answer.compare("Y")) {
				playagain = "yes";

			}
			else {
				cout << "game over! press any key to leave." << endl;
				system("sleep");
			}
		}
	}
	//FROST LORD BATTLE
	////////////////////////////////////////////////
	void frostkingbattle() {
		cout << "you have begun the battle!" << endl;
		monsterhealth = 2000;
		monsterdamage = 200;
		int chance = (rand() % 100) + 1;
		if (chance >= 50) {
			cout << "you get to go first." << endl;
		}
		else {
			cout << "the frost lord goes first!" << endl;
			cout << "the monster deals " << monsterdamage << " to you!" << endl;
			health = health - monsterdamage;
			cout << "you have " << health << " left" << endl;
		}
		while (health > 1) {
			while (monsterhealth >1) {
				cout << "do you attack? attacking deals damage which is " << damage << "." << endl;
				getline(cin, answer);
				if (answer.compare("Info") == 0 || answer.compare("info") == 0 || answer.compare("I") == 0 || answer.compare("i") == 0) {
					cout << "inventory:" << endl;
					cout << "1.) " << inv[0] << endl;
					cout << "2.) " << inv[1] << endl;
					cout << "3.) " << inv[2] << endl;
					cout << "4.) " << inv[3] << endl;
					cout << "5.) " << inv[4] << endl;
					cout << "gold: " << gold << endl;
					cout << "total damage: " << damage << endl;
					getline(cin, answer);
				}
				if (answer.compare("A") == 0 || answer.compare("a") == 0 || answer.compare("Attack") == 0 || answer.compare("attack") == 0) {
					cout << "you deal " << damage << " damage to the frost king! " << endl;
					monsterhealth = monsterhealth - damage;
					cout << "the king has " << monsterhealth << " health left!" << endl;
				}
				else {
					cout << "you did nothing... why?" << endl;
				}
				cout << "the monster deals " << monsterdamage << " to you!" << endl;
				health = health - monsterdamage;
				cout << "you have " << health << " health left!" << endl;
			}
			if (monsterhealth <= 0) {
				cout << "you won the battle! on to the next dungeon. you get 25 gold." << endl;
				gold = gold + 25;
			}
			dungeonmaker();
		}

		if (health <= 0) {
			cout << "you lost the game!" << endl;
			cout << "do you want to go again?" << endl;
			getline(cin, answer);
			if (answer.compare("yes") || answer.compare("Yes") || answer.compare("y") || answer.compare("Y")) {
				playagain = "yes";

			}
			else {
				cout << "game over! press any key to leave." << endl;
				system("sleep");
			}
		}
	}