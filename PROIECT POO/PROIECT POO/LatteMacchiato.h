#pragma once
#include "Recipe.h"
class LatteMacchiato : public Recipe{
private:
	int grindDuration;
	int boilMilk;
	int coffeeQuantity;
	int milkQuantity;
	int waterQuantity;
public:
	LatteMacchiato(list<Resource>,int,int, int, int, int);
	string getName();
	int getGrindDuration();
	int getHeatMilkDuration();
	int getCoffeeQuantity();
	int getMilkQuantity();
	int getWaterQuantity();

	void showInfo() const override;
};

