#include "ResourceHandler.h"

void ResourceHandler::boilWater(int quantity)
{ 
	cout << "Boiling " << quantity << " ml of water for 10 s" << endl;
	for (int i = 1; i < 4; i++) {
		cout << i << endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	cout << "Done!" << endl << endl;
}

void ResourceHandler::grindCoffee(int quantity,int duration)
{
	cout << "Grinding " << quantity << " g of coffee for "<< duration <<" seconds"<< endl;
	cout << "Please wait ! " << endl;
	for (int i = 1; i < duration; i++) {
		cout << i << endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	cout << "Done!" << endl<<endl;
}

void ResourceHandler::heatMilk(int quantity, int duration) {
	cout << "Boiling " << quantity << " ml of milk for " << duration << " seconds" << endl; 
	for (int i = 1; i < duration; i++) {
		cout << i << endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	cout << "Done!" << endl<<endl;
}