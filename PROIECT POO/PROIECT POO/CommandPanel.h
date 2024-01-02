#pragma once
#pragma warning
#include<iostream>
#include "CommandManager.h"
using namespace std;

class CommandPanel
{
public:
	CommandPanel() {};

	void showMenu();

	bool takeCommand(int order);

};

