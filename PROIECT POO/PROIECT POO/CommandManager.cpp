#include "CommandManager.h"

#include "RecipeRepo.h"
#include"ResourceHandler.h"
#include"ResourceContainer.h"
#include "RESOURCE.h"
#include "Water.h"
#include "DoubleEspresso.h"
#include "Tea.h"

ResourceContainer coffeeContainer(Resource::COFFEE, 30);
ResourceContainer waterContainer(Resource::WATER, 70);
ResourceContainer milkContainer(Resource::MILK, 40);
ResourceContainer teabagContainer(Resource::TEABAG, 50);

bool CommandManager::takeCommand(int order) {
	ResourceContainer container;
    ResourceHandler handler ;

    switch (order) {
    case 0:
        exit(0);
    case 1: {
        RecipeRepo recipeRepo("espresso.txt", "Espresso");
        Recipe* recipe = recipeRepo.getRecipe("Espresso");
        if (recipe != nullptr) {
            recipe->showInfo();
        }
        else {
            cout << "Recipe not found";
        }                                                                   
        Espresso* espresso = dynamic_cast<Espresso*>(recipe);
        coffeeContainer.useInRecipe(Resource::COFFEE, espresso->getCoffeeQuantity());
        waterContainer.useInRecipe(Resource::WATER, espresso->getWaterQuantity());

        coffeeContainer.refill(espresso->getCoffeeQuantity());
        waterContainer.refill(espresso->getWaterQuantity());

        handler.boilWater(container.getQuantity(espresso->getWaterQuantity()));
        handler.grindCoffee(container.getQuantity(espresso->getCoffeeQuantity()), container.getQuantity(espresso->getGrindDuration()));

        cout << "Enjoy ! :) " << endl << endl;

        break;
    }
    case 2: {
        RecipeRepo recipeRepo("cappuccino.txt", "Cappuccino");
        Recipe* recipe2 = recipeRepo.getRecipe("Cappuccino");
        if (recipe2 != nullptr) {
            recipe2->showInfo();
        }
        else {
            cout << "Recipe not found" << endl;
        }
        Cappuccinno* cappuccinno = dynamic_cast<Cappuccinno*>(recipe2);
        coffeeContainer.useInRecipe(Resource::COFFEE, cappuccinno->getCoffeeQuantity());
        waterContainer.useInRecipe(Resource::WATER, cappuccinno->getWaterQuantity());
        milkContainer.useInRecipe(Resource::MILK, cappuccinno->getMilkQuantity());

        coffeeContainer.refill(cappuccinno->getCoffeeQuantity());
        waterContainer.refill(cappuccinno->getWaterQuantity());
        milkContainer.refill(cappuccinno->getMilkQuantity());

        handler.boilWater(container.getQuantity(cappuccinno->getWaterQuantity()));
        handler.grindCoffee(container.getQuantity(cappuccinno->getCoffeeQuantity()), container.getQuantity(cappuccinno->getGrindDuration()));
        handler.heatMilk(container.getQuantity(cappuccinno->getMilkQuantity()), container.getQuantity(cappuccinno->getHeatMilkDuration()));

        cout << "Enjoy ! :) " << endl << endl;

        break;
    }
    case 3: {
        RecipeRepo recipeRepo("lattemacchiato.txt", "LatteMacchiato");
        Recipe* recipe3 = recipeRepo.getRecipe("LatteMacchiato");
        if (recipe3 != nullptr) {
            recipe3->showInfo();
        }
        else {
            cout << "Recipe not found";
        }
        LatteMacchiato* latteMacchiato = dynamic_cast<LatteMacchiato*>(recipe3);
        coffeeContainer.useInRecipe(Resource::COFFEE, latteMacchiato->getCoffeeQuantity());
        waterContainer.useInRecipe(Resource::WATER, latteMacchiato->getWaterQuantity());
        milkContainer.useInRecipe(Resource::MILK, latteMacchiato->getMilkQuantity());

        coffeeContainer.refill(latteMacchiato->getCoffeeQuantity());
        waterContainer.refill(latteMacchiato->getWaterQuantity());
        milkContainer.refill(latteMacchiato->getMilkQuantity());

        handler.boilWater(container.getQuantity(latteMacchiato->getWaterQuantity()));
        handler.grindCoffee(container.getQuantity(latteMacchiato->getCoffeeQuantity()), container.getQuantity(latteMacchiato->getGrindDuration()));
        handler.heatMilk(container.getQuantity(latteMacchiato->getMilkQuantity()), container.getQuantity(latteMacchiato->getHeatMilkDuration()));

        cout << "Enjoy ! :) " << endl << endl;

        break;
    }
    case 4:{
		RecipeRepo recipeRepo("water.txt", "Water");
		Recipe* recipe4 = recipeRepo.getRecipe("Water");
        if (recipe4 != nullptr) {
            recipe4->showInfo();
        }
        else {
            cout << "Recipe not found";
        }
		Water* water = dynamic_cast<Water*>(recipe4);
		waterContainer.useInRecipe(Resource::WATER, water->getWaterQuantity());

		waterContainer.refill(water->getWaterQuantity());

        cout << "Enjoy ! :) " << endl << endl;

        break;
    }
    case 5: {
        RecipeRepo recipeRepo("doubleespresso.txt", "DoubleEspresso");
		Recipe* recipe5 = recipeRepo.getRecipe("DoubleEspresso");
        if (recipe5 != nullptr) {
            recipe5->showInfo();
        }
        else {
            cout << "Recipe not found";
        }
		DoubleEspresso* doubleespresso = dynamic_cast<DoubleEspresso*>(recipe5);

        coffeeContainer.useInRecipe(Resource::COFFEE, doubleespresso->getCoffeeQuantity());
        waterContainer.useInRecipe(Resource::WATER, doubleespresso->getWaterQuantity());

        coffeeContainer.refill(doubleespresso->getCoffeeQuantity());
        waterContainer.refill(doubleespresso->getWaterQuantity());

        handler.boilWater(container.getQuantity(doubleespresso->getWaterQuantity()));
        handler.grindCoffee(container.getQuantity(doubleespresso->getCoffeeQuantity()), container.getQuantity(doubleespresso->getGrindDuration()));

        cout << "Enjoy ! :) " << endl << endl;
    }
    case 6: {
		RecipeRepo recipeRepo("tea.txt", "Tea");
		Recipe* recipe6 = recipeRepo.getRecipe("Tea");
        if (recipe6 != nullptr) {
            recipe6->showInfo();
        }
        else {
            cout << "Recipe not found";
        }
		Tea* tea = dynamic_cast<Tea*>(recipe6);

		waterContainer.useInRecipe(Resource::WATER, tea->getWaterQuantity());
        teabagContainer.useInRecipe(Resource::TEABAG, tea->getTeabagQuantity());

		waterContainer.refill(tea->getWaterQuantity());
		teabagContainer.refill(tea->getTeabagQuantity());

		handler.boilWater(container.getQuantity(tea->getWaterQuantity()));

		cout << "Enjoy ! :) " << endl << endl;
    }
    }
    return true;

}