#pragma once
#include <iostream>
#include <string>
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;


class CGarden
{
protected:
	
public:
	string name;
	float price;
	int number;
	CGarden(void);
	CGarden(string name, float price, int number);
	virtual void getData();
	virtual void display();
};

