#include "CFlower.h"
#include <iostream>
using namespace std;
CFlower::CFlower(void) {
	color = "Your input is incorrect";

}
CFlower::CFlower(string color) {
	this->color = color;
}
void CFlower::getData() {
	CGarden::getData();
	cin.ignore();
	cout << "\nPlease eneter the color of flower"; getline(cin, color);
}
void CFlower::display() {
	CGarden::display();
	cout << "\nColor of the flower is: " << color;
}