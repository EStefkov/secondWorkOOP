#include "CFlower.h"
CFlower::CFlower(void) {
	color = "Your input is incorrect";

}
CFlower::CFlower(string color) {
	this->color = color;
}
void CFlower::getData() {
	CGarden::getData();
	cout << "Please eneter the color of flower"; getline(cin, color);
}
void CFlower::display() {
	CGarden::display();
	cout << "Color of the flower is: " << color;
}