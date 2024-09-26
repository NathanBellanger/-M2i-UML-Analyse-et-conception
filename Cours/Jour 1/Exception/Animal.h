#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <stdexcept> // Pour std::runtime_error

// Classe de base Animal
class Animal {
    public:
        std::string nom;

        Animal(std::string nom) : nom(nom) {}
        ~Animal() {}

        void respire() {
            std::cout << nom << " respire." << std::endl;
        }

        void faireDuBruit() const {
            std::cout << nom << " fait un bruit." << std::endl;
        }
};