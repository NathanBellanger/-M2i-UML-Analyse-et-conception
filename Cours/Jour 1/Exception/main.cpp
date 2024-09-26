#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <stdexcept>
#include "Chien.h"
#include "Chat.h"
#include "Oiseau.h"

int main() {
    Chenil monChenil;
    Chat monChat("Mimi");
    Chien monChien("Rex");
    Oiseau monOiseau("Titi");

    try {
        // Ajout de chiens et de chats
        monChenil.ajouterAnimal(monChat);
        monChenil.ajouterAnimal(monChien);
        // Cela lèvera une exception
        monChenil.ajouterAnimal(monOiseau);

    } catch (const AnimalNonValideException& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    // Faire du bruit pour tous les animaux valides ajoutés
    monChenil.faireFaireDuBruitATous();

    return 0;
}