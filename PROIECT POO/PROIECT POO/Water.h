#pragma once
#include "Recipe.h"
class Water : public Recipe{
private:
	int waterQuantity;
public:
	Water(list<Resource>,int);

	string getName();

	void showInfo() const override;

	int getWaterQuantity();
};

