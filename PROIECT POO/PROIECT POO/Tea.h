#pragma once
#include "Recipe.h"
class Tea : public Recipe{
private:
	int waterQuantity;
	int teabagQuantity;
public:

	Tea(list<Resource>,int,int);

	string getName();

	int getTeabagQuantity();

	int getWaterQuantity();

	void showInfo() const override;
};

