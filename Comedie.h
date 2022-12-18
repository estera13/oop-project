

#ifndef OOP_COMEDIE_H
#define OOP_COMEDIE_H


#include <string>
#include "Film.h"

class Comedie : Film{
   std::string actor_principal;
public:
    Comedie(const std::string &nume, const std::string &gen, const std::string &ora, int durata, float pret,
           const std::string &tehnologie, int pegi, const std::string actor_principal) : Film(nume, gen, ora, durata, pret,tehnologie, pegi), actor_principal(actor_principal) {}
    ~Comedie() {}
};


#endif //OOP_COMEDIE_H
