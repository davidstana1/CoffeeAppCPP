#include "Water.h"

Water::Water(list<Resource> resources,int waterQuantity) {
	this->resources = resources;
	this->waterQuantity = waterQuantity;
}

string Water::getName() {
	return "Water";
}

void Water::showInfo() const {
	cout << "\nWater recipe : \n";
	cout << "Water Quantity: " << waterQuantity << " ml\n";
}

int Water::getWaterQuantity() {
	return waterQuantity;
}