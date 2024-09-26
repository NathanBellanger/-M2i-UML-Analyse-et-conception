#include "Chat.h"
#include "Chien.h"

int main() {
    // Création d'un objet Chat
    Chat monChat("Mimi");
    // Création d'un objet Chien
    Chien monChien("Rex");

    // Appel des méthodes
    monChat.respire();
    monChat.ronronner();
    monChien.dors();
    return 0;
}