#pragma once
#include "CGarden.h"
class CFlower :
    public CGarden
{protected:
    string color;
public:
    CFlower(void);
    CFlower(string color);
    void getData();
    void display();

};

