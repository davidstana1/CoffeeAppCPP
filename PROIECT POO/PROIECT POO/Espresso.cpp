#include "Espresso.h"

Espresso::Espresso(list<Resource> resources, int grindDuration, int coffeeQuantity, int waterQuantity) {
	this->resources = resources;
	this->grindDuration = grindDuration;
	this->coffeeQuantity = coffeeQuantity;
	this->waterQuantity = waterQuantity;
}

int Espresso::getGrindDuration() {
	return grindDuration;
}

int Espresso::getCoffeeQuantity() {
	return coffeeQuantity;
}

int Espresso::getWaterQuantity() {
	return waterQuantity;
}

string Espresso::getName() {
    return "Espresso";
}


void Espresso::showInfo() const {
    cout << "Espresso Recipe:\n";
    cout << endl;
    cout << "Grind Duration: " << grindDuration << " seconds\n";
    cout << "Coffee Quantity: " << coffeeQuantity << " g\n";
    cout << "Water Quantity: " << waterQuantity << " ml\n";
    cout << "Resources: ";
    for (const auto& resource : resources) {
        switch (resource) {
        case Resource::COFFEE:
            cout << "Coffee ";
            break;
        case Resource::WATER:
            cout << "Water ";
            break;
        case Resource::MILK:
            cout << "Milk ";
            break;
        }
    }
    cout << "\n";
}