#include <iostream>
#include <QtCore/QCoreApplication>
#include <QtCore/QDebug>

#include "purse.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << "Bievenue sur notre site de carte en ligne" << std::endl;
    std::cout << "SE CONNECTER [ 1 ], S'INSCRIRE [ 2 ]" << std::endl;
    int choice;
    std::cin >> choice;
    if (choice == 1) {
		std::cout << "SOON" << std::endl;
		return 0;
    }
    if (choice == 2) {
		Purse(525) p;
		p.connect();
    }
    return a.exec();
}