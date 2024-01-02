#include<iostream>

using namespace std;

#include "Everything.h"
#include "RecipeRepo.h"
#include "ResourceContainer.h"

int main() {
	int o, y;
	CommandPanel p;
	CommandManager m;

	while (1) {
		p.showMenu();

		cin >> o;

		p.takeCommand(o);
		m.takeCommand(o);
	}
	
	//facut refill sau reload ce o fi
	//apa ceai cafea lunga



	return 0;
}