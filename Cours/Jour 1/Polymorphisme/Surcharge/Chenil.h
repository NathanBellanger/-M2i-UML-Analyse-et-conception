#include <iostream>
#include <string>
#include <vector>
#include "Animal.h"

class Chenil {
    private:
        std::vector<Animal> animaux;

    public:
        // Ajouter un animal (chien ou chat) au chenil
        void ajouterAnimal(std::unique_ptr<Animal> animal) {
            animaux.push_back(animal);
        }

        // Faire du bruit pour tous les animaux dans le chenil
        void faireFaireDuBruitATous() const {
            for (const auto& animal : animaux) {
                animal->faireDuBruit();  // Appelle la méthode virtuelle correcte (chien ou chat)
            }
        }

        // Afficher tous les animaux dans le chenil
        void afficherAnimaux() const {
            std::cout << "Les animaux dans le chenil sont : " << std::endl;
            for (const auto& animal : animaux) {
                std::cout << "- " << animal->nom << std::endl;
            }
        }