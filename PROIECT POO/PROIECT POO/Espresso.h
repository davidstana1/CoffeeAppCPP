#pragma once
#include<iostream>
#include<list>
#include "Recipe.h"
class Espresso : public Recipe
{
private:
	int grindDuration;
	int coffeeQuantity;
	int waterQuantity;
public:
	Espresso(list<Resource>,int,int,int);

	string getName();

	int getGrindDuration();

	int getCoffeeQuantity();

	int getWaterQuantity();

	void showInfo() const override;
};

