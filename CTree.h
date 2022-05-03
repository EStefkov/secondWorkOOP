#pragma once
#include "CGarden.h"


class CTree :
     public CGarden
{
protected:
    float height;
    string type = {"coniferous","deciduous"};
public:
    CTree(void);
    CTree(float height, string type);
    ~CTree();
    void getData();
    void display();

};

