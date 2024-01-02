#include "LatteMacchiato.h"

LatteMacchiato::LatteMacchiato(list<Resource> resources,int grindDuration, int coffeeQuantity, int milkQuantity, int waterQuantity, int boilMilk) {
    this->resources = resources;
	this->grindDuration = grindDuration;
	this->coffeeQuantity = coffeeQuantity;
	this->milkQuantity = milkQuantity;
	this->waterQuantity = waterQuantity;
	this->boilMilk = boilMilk;
}

int LatteMacchiato::getGrindDuration() {
    return grindDuration;
}

int LatteMacchiato::getCoffeeQuantity() {
    return coffeeQuantity;
}

int LatteMacchiato::getHeatMilkDuration() {
    return boilMilk;
}

int LatteMacchiato::getMilkQuantity() {
    return milkQuantity;
}

int LatteMacchiato::getWaterQuantity() {
    return waterQuantity;
}

string LatteMacchiato::getName() {
    return "LatteMacchiato";
}

void LatteMacchiato::showInfo() const {
    cout << "Latte Macchiato Recipe:\n";
    cout << "Grind Duration: " << grindDuration << " seconds\n";
    cout << "Coffee Quantity: " << coffeeQuantity << " g\n";
    cout << "HeatMilk Duration: " << boilMilk << " seconds\n";
    cout << "Milk Quantity: " << milkQuantity << " ml\n";
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