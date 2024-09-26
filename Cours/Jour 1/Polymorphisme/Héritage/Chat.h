#include <iostream>
#include <string>
#include "Animal.h"

class Chat : public Animal {
    public:
        // Constructeur de Chat, appelant le constructeur de Animal
        Chat(std::string nom) : Animal(nom) {}

        // Redéfinition de la méthode faireDuBruit
        void faireDuBruit() override {
            std::cout << nom << " miaule !" << std::endl;
        }

        // Méthode spécifique à la classe Chat
        void ronronner() {
            std::cout << nom << " ronronne." << std::endl;
        }
};