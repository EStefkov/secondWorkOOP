#include "CTree.h"


CTree::CTree(void) {
	height = 0.00;
	type = "empty input";
}
CTree::CTree(float height, string type) {
	this->height = height;
	this->type = type;
}
void CTree::getData() {
	CGarden::getData();
	cout << "How high it is: "; cin >> height;
	cout << "Select coniferous or deciduous: "; cin >> type;
}
void CTree::display() {
	CGarden::display();
	cout << "Height of the three is: " << height << "m.\n" <<
		"You select" << type;
}
