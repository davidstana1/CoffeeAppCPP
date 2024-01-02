#pragma once
#include<iostream>
#include<list>
#include "Recipe.h"
class Cappuccinno : public Recipe
{
private:
	int grindDuration;
	int boilMilk;
	int coffeeQuantity;
	int milkQuantity;
	int waterQuantity;
public:
	Cappuccinno(list<Resource>,int, int, int, int, int);

	string getName();

	int getGrindDuration();

	int getHeatMilkDuration();

	int getCoffeeQuantity();

	int getMilkQuantity();

	int getWaterQuantity();

	void showInfo() const override;
};

