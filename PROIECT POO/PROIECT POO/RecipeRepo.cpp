#include <iostream>
#include "RecipeRepo.h"
#include "Espresso.h"
#include"LatteMacchiato.h"
#include "Cappuccinno.h"
#include "Water.h"
#include "DoubleEspresso.h"
#include "Tea.h"

RecipeRepo::RecipeRepo(string filePath, const string& recipeType) {
	ifstream file(filePath);

	if (!file.is_open()) {
		throw runtime_error("File not found!");
	}

	string line;
	while (getline(file, line)) {
		//cout << "Reading line from file: " << line << endl;
		recipes.push_back(parseRecipe(line, recipeType));
	}
	
}

Recipe* RecipeRepo::getRecipe(const string& recipeType) {
	//cout << "Looking for recipe: " << recipeType << endl;
	if (recipeType == "Espresso") {
		for (auto recipe : recipes) {
			Espresso* espresso = dynamic_cast<Espresso*>(recipe);
			if (espresso && espresso->getName() == recipeType) {
				//cout << "Found Espresso recipe!" << endl;
				return espresso;
			}
		}
	}
	else if (recipeType == "LatteMacchiato") {
		for (auto recipe : recipes) {
			LatteMacchiato* latteMacchiato = dynamic_cast<LatteMacchiato*>(recipe);
			if (latteMacchiato && latteMacchiato->getName() == recipeType) {
				//cout << "Found Latte Macchiato recipe ! " << endl;
				return latteMacchiato;
			}
		}
	}
	else if (recipeType == "Cappuccino") {
		for (auto recipe : recipes) {
			Cappuccinno* cappuccinno = dynamic_cast<Cappuccinno*>(recipe);
			if (cappuccinno && cappuccinno->getName() == recipeType) {
				//cout << "Found Cappuccinno recipe!" << endl;
				return cappuccinno;
			}
		}
	}
	else if (recipeType == "Water") {
		for (auto recipe : recipes) {
			Water* water = dynamic_cast<Water*>(recipe);
			if (water && water->getName() == recipeType) {
				//cout << "Found Water recipe ! " << endl;
				return water;
			}
		}
	}
	else if (recipeType == "DoubleEspresso") {
		for (auto recipe : recipes) {
			DoubleEspresso* doubleEspresso = dynamic_cast<DoubleEspresso*>(recipe);
			if (doubleEspresso && doubleEspresso->getName() == recipeType) {
				//cout << "Found Double Espresso recipe!" << endl;
				return doubleEspresso;
			}
		}
	}
	else if (recipeType == "Tea") {
		for (auto recipe : recipes) {
			Tea* tea = dynamic_cast<Tea*>(recipe);
			if (tea && tea->getName() == recipeType) {
				//cout << "Found Tea recipe!" << endl;
				return tea;
			}
		}
	}
}

Recipe* RecipeRepo::parseRecipe(const string& line, const string& recipeType) {
	istringstream iss(line);
	list<Resource> resources;
	int grindDuration = 0;
	int boilMilk = 0;
	int coffeeQuantity = 0;
	int milkQuantity = 0;
	int waterQuantity = 0;
	int teabagQuantity = 0;

	string parsedRecipeType;
	iss >> parsedRecipeType;

	if (parsedRecipeType != recipeType) {
		throw runtime_error("Invalid recipe type");
	}


	int resourceValue;

	if (recipeType == "Espresso") {
		for (int i = 0; i < 2 && iss >> resourceValue; ++i) {
			resources.push_back(static_cast<Resource>(resourceValue));
		}
		iss >> coffeeQuantity >> waterQuantity >> grindDuration;
		Espresso* espresso = new Espresso(resources, coffeeQuantity, waterQuantity, grindDuration);
		return espresso;
	}
	else if (recipeType == "LatteMacchiato") {
		for (int i = 0; i < 3 && iss >> resourceValue; ++i) {
			resources.push_back(static_cast<Resource>(resourceValue));
		}
		iss >> coffeeQuantity >> waterQuantity >> grindDuration >> boilMilk >> milkQuantity;
		LatteMacchiato* latteMacchiato = new LatteMacchiato(resources, coffeeQuantity, waterQuantity, grindDuration, boilMilk, milkQuantity);
		return latteMacchiato;
	}
	else if (recipeType == "Cappuccino") {
		for (int i = 0; i < 3 && iss >> resourceValue; ++i) {
			resources.push_back(static_cast<Resource>(resourceValue));
		}
		iss >> coffeeQuantity >> waterQuantity >> grindDuration >> boilMilk >> milkQuantity;
		Cappuccinno* cappuccinno = new Cappuccinno(resources, grindDuration, coffeeQuantity, milkQuantity, waterQuantity, boilMilk);
		return cappuccinno;
	}
	else if (recipeType == "Water") {
		iss >> resourceValue;
		resources.push_back(static_cast<Resource>(resourceValue));
		iss >> waterQuantity;

		Water* water = new Water(resources, waterQuantity);
		return water;
	}
	else if (recipeType == "DoubleEspresso") {
		for (int i = 0; i < 2 && iss >> resourceValue; ++i) {
			resources.push_back(static_cast<Resource>(resourceValue));
		}
		iss >> coffeeQuantity >> waterQuantity >> grindDuration;
		DoubleEspresso* doubleespresso = new DoubleEspresso(resources, coffeeQuantity, waterQuantity, grindDuration);
		return doubleespresso;
	}
	else if (recipeType == "Tea") {
		for (int i = 0; i < 2 && iss >> resourceValue; ++i) {
			resources.push_back(static_cast<Resource>(resourceValue));
		}
		iss >> waterQuantity >> teabagQuantity;
		Tea* tea = new Tea(resources, waterQuantity,teabagQuantity);
		return tea;
	}

}
