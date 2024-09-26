#include <iostream>
#include <string>

class Animal {
    public:
        std::string nom;

    public:
        Animal(std::string nom) : nom(nom) {
        }

        ~Animal(){
        }

        void faireDuBruit() {
            std::cout << nom << " fait un bruit." << std::endl;
        }

        void respire() {
            std::cout << nom << " respire." << std::endl;
        }

        void mange() {
            std::cout << nom << " mange." << std::endl;
        }

        void dors() {
            std::cout << nom << " dors." << std::endl;
        }
};