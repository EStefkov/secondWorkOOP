#include "CGarden.h"
#include "CTree.h"
#include "CFlower.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
CGarden::CGarden(void) {
	name = "not found";
	price = 0.00;
	number = 0;

}
CGarden::CGarden(string name, float price, int number) {
	this->name = name;
	this->price = price;
	this->number = number;

}
CGarden::~CGarden() {}
   void CGarden::getData() {
	 cin.ignore();
	 cout << "Please enter Tree or Flower: "; getline(cin,name);
	 cout << "Enter price for: "; cin >> price;
	 cout << "Enter number of plants: "; cin >> number;

}
   void CGarden::display() {
	   cout << "You select: " << name <<
		   "\nPrice for the "<<name<< " is :" << price <<
		   "Number of plants: " << number;
   
   }
