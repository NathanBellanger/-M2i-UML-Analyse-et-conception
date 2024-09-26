#include <iostream>
#include <string>

class Animal {
    public:
        // Déclaration de la signature sans implémentation
        virtual void faireDuBruit();
        virtual void respire();
        virtual void mange();
        virtual void dors();
};