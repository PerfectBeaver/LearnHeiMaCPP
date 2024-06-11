#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

#include "Identity.h"
#include "globalFile.h"
#include "teacher.h"
#include "student.h"
#include "computerRoom.h"

using namespace std;

class Manager : public Identity
{
public:
    Manager();

    Manager(string name, string pwd);

    virtual void operMenu();

    void addPerson();

    void showPerson();

    void showComputer();

    void cleanFile();

    void initVector();

    bool checkRepeat(int id, int type);

    vector<Student> vStu;

    vector<Teacher> vTea;

    vector<ComputerRoom> vCom;
};