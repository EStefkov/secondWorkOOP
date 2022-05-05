#pragma once
#include "CGarden.h"


class CTree :
     public CGarden
{
protected:
    
    string type;
public:
    float height;
    CTree(void);
    CTree(float height, string type);
    void getData();
    void display();

};

