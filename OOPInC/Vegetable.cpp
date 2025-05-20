#include "Vegetable.h"

void Vegetable::consume() {
	if (isSteamed) {
		cout << "Bleh, steamed vegetables" << endl;
	}
	else {
		cout << "Nom Nom Nom... vegetable sounds" << endl;
	}
}