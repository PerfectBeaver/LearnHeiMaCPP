#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"
#include <string>
#include "orderFile.h"
#include <vector>

class Teacher : public Identity
{
public:
    Teacher();

    Teacher(int empID, string name, string pwd);

    virtual void operMenu();

    void showAllOrder();
    
    void validOrder();

    int m_EmpId;
};