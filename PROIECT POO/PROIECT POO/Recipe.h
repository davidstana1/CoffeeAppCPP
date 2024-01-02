#pragma once
#include<iostream>
#include<list>
#include "RESOURCE.h"
using namespace std;

class Recipe
{
protected:
	list<Resource> resources;
public:
	virtual void showInfo() const = 0;
};

