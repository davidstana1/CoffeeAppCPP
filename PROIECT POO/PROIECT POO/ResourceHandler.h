#pragma once
#include<iostream>
#include <thread>         
#include <chrono>
#include<list>
#include"Everything.h"
#include"ResourceContainer.h"
#include "CommandManager.h"
using namespace std;

class ResourceHandler
{
public:

	void boilWater(int quantity);

	void grindCoffee(int quantity,int duration);

	void heatMilk(int quantity,int duration);
};

