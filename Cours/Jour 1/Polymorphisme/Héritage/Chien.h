#include <iostream>
#include <string>
#include "Animal.h"

class Chien : public Animal {
    public:
        // Constructeur de Chien, appelant le constructeur de Animal
        Chien(std::string nom) : Animal(nom) {}

        // Redéfinition de la méthode faireDuBruit
        void faireDuBruit() override {
            std::cout << nom << " aboie !" << std::endl;
        }

        // Méthode spécifique à la classe Chien
        void secouerLaQueue() {
            std::cout << nom << " secoue la queue." << std::endl;
        }
};