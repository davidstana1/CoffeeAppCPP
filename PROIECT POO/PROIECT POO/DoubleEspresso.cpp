#include "DoubleEspresso.h"

DoubleEspresso::DoubleEspresso(list<Resource> resources, int grindDuration, int coffeeQuantity, int waterQuantity) {
    this->resources = resources;
    this->grindDuration = grindDuration;
    this->coffeeQuantity = coffeeQuantity;
    this->waterQuantity = waterQuantity;
}

int DoubleEspresso::getGrindDuration() {
    return grindDuration;
}

int DoubleEspresso::getCoffeeQuantity() {
    return coffeeQuantity;
}

int DoubleEspresso::getWaterQuantity() {
    return waterQuantity;
}

string DoubleEspresso::getName() {
    return "DoubleEspresso";
}


void DoubleEspresso::showInfo() const {
    cout << "Double Espresso Recipe:\n";
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