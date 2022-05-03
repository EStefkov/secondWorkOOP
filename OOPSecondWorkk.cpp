/*В градински център се продават растения(наименование, цена, брой), които биват
дървета(височина, вид(иглолистни/широколистни))и цветя(цвят).Данни за всяко растение се съхранява в масив.
Да се състави програма, която изпълнява от меню следните опредации:
- добавя към масива данните на ново растение;
- извежда всички въведени данни;
- извежда данните на дърветата с височина над 2 метра;
- създава масив с данните на всички цветя.*/

#include "CGarden.h"
#include "CFlower.h"
#include "CTree.h"
#include <iostream>
#include <string>
#include <iostream>
#include <conio.h>
#include <stdlib.h>



void main()
{
	CGarden product[100];
	int plants = 0;
		char menu;
	do {
		cout << "         MENU FOR ADDING EMPLOYEE:\n"
			<< "1 - Add new plant: \n"
			<< "2 - Show all plants: \n"
			<< "3 - All trees with height more than 2 m.: \n"
			<< "4 - Creating array with all flowers: \n"
			<< "Chose 0 for end:";
		cin >> menu;
		switch (menu) {
		case'0':break;
		case'1':product[plants++].getData(); break;
		case'2':for (int i = 0; i < plants; i++)product[i].display(); break;
		case'3': for (int i = 0; i < plants; i++) if (product[i].name == "Tree" && ) {}; break;
		case'4':break;
		default: cout << "\nERROR YOUR INPUT IS INCORRECT\n";
		}

	}
	while (menu != '0');
} 

