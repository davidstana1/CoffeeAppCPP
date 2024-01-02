#include "ResourceContainer.h"

ResourceContainer::ResourceContainer(Resource res,int currentQ) {
	this->resource=res;
	this->currentQ = currentQ;
}

int ResourceContainer::getQuantity(int quantity) {
	return quantity;
}

void ResourceContainer::refill(int quantity) {
	string resourceName;  
	switch (resource) {
	case Resource::COFFEE:
		resourceName = "COFFEE";
		break;
	case Resource::WATER:
		resourceName = "WATER";
		break;
	case Resource::MILK:
		resourceName = "MILK";
		break;
	case Resource::TEABAG:
		resourceName = "TEABAG";
		break;
	}

	if (getQuantity(currentQ) < lowQ) {
		cout << "Low on " << resourceName << "!" << endl;
		cout << "Current quantity: " << getQuantity(currentQ) << endl;
		cout << "Refilling ! " << endl;
		for (int i = 0; i < 3; i++) {
			cout << i << endl;
			std::this_thread::sleep_for(std::chrono::seconds(1));
		}
		cout << "Done!" << endl;
		currentQ = maxQ;
		cout << "After refill quantity : " << getQuantity(currentQ) << endl;
	}
	if (getQuantity(quantity) > maxQ)
		currentQ = maxQ;
}

void ResourceContainer::useInRecipe(Resource resourceType, int quantity) {
    string resourceName;
    switch (resourceType) {
    case Resource::COFFEE:
        resourceName = "COFFEE";
        break;
    case Resource::WATER:
        resourceName = "WATER";
        break;
    case Resource::MILK:
        resourceName = "MILK";
        break;
	case Resource::TEABAG:
		resourceName = "TEABAG";
			break;
    }
	cout << endl;
    cout << "Current quantity of " << resourceName << " is " << currentQ << endl;
    if (currentQ > quantity) {
        currentQ -= quantity;
        cout << "Used " << quantity << " units of " << resourceName << " in the recipe." << endl;
        cout << "Remaining quantity: " << currentQ << endl << endl;
    }
}
