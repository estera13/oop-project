

#ifndef OOP_COMEDIE_H
#define OOP_COMEDIE_H


#include <string>
#include "Film.h"

class Comedie : public Film{
   std::string actor_principal;
public:
    Comedie(const std::string &nume, const std::string &gen, const std::string &ora, int durata, float pret,
           const std::string &tehnologie, int pegi, const std::string &actor_principal);
    ~Comedie();

     void afisare(std::ostream& os) const;

    Comedie &operator=(const Comedie &other);

    friend std::ostream &operator<<(std::ostream &os, const Comedie &comedie);
};


#endif //OOP_COMEDIE_H
