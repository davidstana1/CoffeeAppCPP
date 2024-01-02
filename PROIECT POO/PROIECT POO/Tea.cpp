#include "Tea.h"

Tea::Tea(list<Resource> resources ,int waterQuantity,int teabagQuantity) {
	this->resources = resources;
	this->waterQuantity = waterQuantity;
	this->teabagQuantity = teabagQuantity;
}

string Tea::getName() {
	return "Tea";
}

int Tea::getWaterQuantity() {
	return waterQuantity;
}

int Tea::getTeabagQuantity() {
    return teabagQuantity;
}

void Tea::showInfo() const {
	cout << "Tea Recipe : \n" << endl;
	cout << "Water Quantity: " << waterQuantity << " ml\n";
	cout << "Teabag Quantity : " << teabagQuantity << endl;
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
        case Resource::TEABAG:
            cout << "Teabag";
            break;
        }
    }
    cout << "\n";
}