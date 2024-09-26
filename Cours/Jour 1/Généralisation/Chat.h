#include <iostream>
#include <string>
#include "Animal.h"

class Chat : public Animal {
    public:
        // Constructeur de Chat, appelant le constructeur de Animal
        Chat(std::string nom) : Animal(nom) {}

        // Méthode spécifique à la classe Chat
        void ronronner() {
            std::cout << nom << " ronronne." << std::endl;
        }
};