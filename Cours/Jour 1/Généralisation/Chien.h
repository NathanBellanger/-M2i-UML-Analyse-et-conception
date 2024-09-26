#include <iostream>
#include <string>
#include "Animal.h"

class Chien : public Animal {
    public:
        // Constructeur de Chien, appelant le constructeur de Animal
        Chien(std::string nom) : Animal(nom) {}

        // Méthode spécifique à la classe Chien
        void secouerLaQueue() {
            std::cout << nom << " secoue la queue." << std::endl;
        }
};