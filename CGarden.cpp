#include"CGarden.h"
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
   void CGarden::getData() {
	 cin.ignore();
	 cout << "Please enter name of the plant: "; getline(cin,name);
	 cout << "Enter price for: "; cin >> price;
	 cout << "Enter number of plants: "; cin >> number;

}
   void CGarden::display() {
	   cout << "You select: " << name <<
		   "\nPrice for the "<<name<< " is :" << price <<
		   "\nNumber of plants: " << number;
   
   }
