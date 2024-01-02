#include "Cappuccinno.h"

Cappuccinno::Cappuccinno(list<Resource>resources,int grindDuration, int coffeeQuantity, int milkQuantity, int waterQuantity, int boilMilk) {
	this->resources = resources;
	this->grindDuration = grindDuration;
	this->coffeeQuantity = coffeeQuantity;
	this->milkQuantity = milkQuantity;
	this->waterQuantity = waterQuantity;
	this->boilMilk = boilMilk;
}

int Cappuccinno::getGrindDuration() {
    return grindDuration;
}

int Cappuccinno::getCoffeeQuantity() {
    return coffeeQuantity;
}

int Cappuccinno::getHeatMilkDuration() {
    return boilMilk;
}

int Cappuccinno::getMilkQuantity() {
    return milkQuantity;
}

int Cappuccinno::getWaterQuantity() {
    return waterQuantity;
}

string Cappuccinno::getName() {
    return "Cappuccino";
}

void Cappuccinno::showInfo() const {
    cout << "Cappuccinno Recipe:\n";
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
