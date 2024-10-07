#include <iostream>
#include <string>
#include "Animal.h"

class Oiseau : public Animal {
    public:
        string nom;

    public:
        // Constructeur de Oiseau
        Oiseau(std::string nom) : nom(nom) {}

        // Définition spécifique de la méthode faireDuBruit
        void respire() {
            std::cout << nom << " respire." << std::endl;
        }
        void mange() {
            std::cout << nom << " mange des graines." << std::endl;
        }
        void dors() {
            std::cout << nom << " se repose sur son perchoir." << std::endl;
        }
};