/*В градински център се продават растения ( наименование цена брой) които биват дървета 
(височина вид(иглолистни/широколистни )) и цветя
(цвят) данните за всяко растение се съхранява в масив.
Да се състави програма която изпълнява от меню следните операции.
- добавя към масива данните на ново растение;
- извежда всички въведени данни.
- извежда данните на дърветата с височина над 2 метра.
-създава масив с данните на всички цветя.*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "CGarden.h"
#include "CFlower.h"
#include "CTree.h"
#include <string>
using namespace std;

void main() {

	int numPlants = 0, menu;
	string plant;
	CGarden* plants[30];

	do {
		cout << "\n-------------------Menu--------------\n";
		cout << "1-enter a new plant\n";
		cout << "2-display all figure's info\n";
		cout << "3-display the total from the perimeters\n";
		cout << "0-for end\n";
		cin >> menu;

		switch (menu) {
		case 0:break;

		case 1: {
			
			cin.ignore();
			cout << "Enter Flower or Tree: "; getline(cin, plant);
			if (plant == "Flower") {
				plants[numPlants++] = new CFlower;
				plants[numPlants++]->getData();

			}
			if (plant == "Tree") {
				plants[numPlants++] = new CTree;
				plants[numPlants++]->getData();
			}

		} break;
		case 2:for (int i = 0; i < numPlants; i++) {
			plants[i]->display();
		}; break;

		}

	} while (menu != 0);
}