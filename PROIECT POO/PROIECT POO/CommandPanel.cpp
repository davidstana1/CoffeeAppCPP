#include "CommandPanel.h"

void CommandPanel::showMenu() {
	cout << "0.Iesire\n";
	cout << "1.Espresso\n";
	cout << "2.Cappucino\n";
	cout << "3.Latte Machiatto\n";
	cout << "4.Water\n";
	cout << "5.Double Espresso\n";
	cout << "6.Tea\n";
	cout << "Enter your choice : \n";
}

bool CommandPanel::takeCommand(int order) {
	switch (order) {
	case 0:
		exit(0);
	case 1:
		cout << "You chose Espresso ! ";
		break;
	case 2:
		cout << "You chose Cappucino !";
		break;
	case 3:
		cout << "You chose Latte Macchiato ! ";
		break;
	case 4:
		cout << "You chose Water !";
		break;
	case 5:
		cout << "You chose Double Espresso ! ";
		break;
	case 6:
		cout << "You chose Tea ! ";
		break;
	default:
		cout << "Optiune invalida";
		return false;
	}
	return true;

}