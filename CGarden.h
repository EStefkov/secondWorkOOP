#pragma once
#include <iostream>
#include <string>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "CAbsClass.h"
using namespace std;


class CGarden
	virtual public CAbsClass
{
protected:
	
public:
	string name;
	float price;
	int number;
	CGarden(void);
	CGarden(string name, float price, int number);
	~CGarden();
	virtual void getData();
	virtual void display();
};

