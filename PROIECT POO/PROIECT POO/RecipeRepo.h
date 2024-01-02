#pragma once
#include<iostream>
#include<list>
#include "Recipe.h"
#include <iostream>
#include <sstream>
#include <string>
#include<fstream>
using namespace std;

class RecipeRepo
{
private:
	string filePath;
	string recipeType;
	list<Recipe*> recipes;
public:
	RecipeRepo(string, const string&) ;

	Recipe* getRecipe(const string&);
private:
	Recipe* parseRecipe(const string&,const string&);
};
