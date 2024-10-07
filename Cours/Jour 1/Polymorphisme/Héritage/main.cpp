#include "Chat.h"
#include "Chien.h"

int main() {
    // Création du chenil
    Chenil monChenil;

    // Création des animaux
    Chien chien1("Rex");
    Chat chat1("Mimi");
    Chien chien2("Bella");
    Chat chat2("Felix");

    // Ajout de chiens et de chats dans le chenil
    monChenil.ajouterAnimal(chien1);
    monChenil.ajouterAnimal(chat1);
    monChenil.ajouterAnimal(chien2);
    monChenil.ajouterAnimal(chat2);

    // Afficher les animaux dans le chenil
    monChenil.afficherAnimaux();

    // Faire faire du bruit à tous les animaux dans le chenil
    monChenil.faireFaireDuBruitATous();
    return 0;
}