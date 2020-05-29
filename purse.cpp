#include <iostream>
#include <ctime>
#include "purse.h"


Purse::Purse() {
}

Purse::Purse(const int SOLDE) {
	int m_essaie = 3;
	bool m_blocked = false;
	m_pin = rand();
	std::cout << m_pin << std::endl;
}


void Purse::auth() {
	int m_essaie_max = 3;
	int pin = NULL;
	while(pin != m_pin) {
		m_essaie--;
		std::cout << "Nombre d'essaie restant : " << m_essaie << std::endl;
		std::cout << "Votre pin : ";
		std::cin >> pin;
		if (m_essaie == 0) {
			bool blocked = true;
			std::cout << "Votre compmte est bloquer !";
			break;
		}
	}
	if (pin == m_pin) {
		std::cout << "Vous connected" << std::endl;
	}
}

void Purse::connect() {
	auth();
}

int Purse::rand() {
	std::srand(time(NULL));
	int random = std::rand() % (1000 - 9999 ) + 1000;
	return random;
}