/*� ��������� ������ �� �������� ��������(������������, ����, ����), ����� �����
�������(��������, ���(����������/������������))� �����(����).����� �� ����� �������� �� ��������� � �����.
�� �� ������� ��������, ����� ��������� �� ���� �������� ���������:
- ������ ��� ������ ������� �� ���� ��������;
- ������� ������ �������� �����;
- ������� ������� �� ��������� � �������� ��� 2 �����;
- ������� ����� � ������� �� ������ �����.*/

#include "CGarden.h"
#include "CFlower.h"
#include "CTree.h"
#include <iostream>
#include <string>
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void main()
{
	CGarden* product[100];
	int plants = 0, heightTrees = 0;
	string TreeOrFlower;
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
		case'1': {

			cout << "Enter Flower or Tree: "; cin>> TreeOrFlower;
			if (TreeOrFlower == "Flower") {
				product[plants] = new CFlower;
				product[plants++]->getData();
			}
			if (TreeOrFlower == "Tree") {
				product[plants] = new CTree;
				product[plants++]->getData();
			}

		} break;
		case'2':for (int i = 0; i < plants; i++) product[i]->display(); break;
		case'3':for (int i = 0; i < plants; i++);
			
			; break;
		case'4':break;
		default: cout << "\nERROR YOUR INPUT IS INCORRECT\n";
		}

	}
	while (menu != '0');
} 

