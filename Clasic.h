
#ifndef OOP_CLASIC_H
#define OOP_CLASIC_H

#include <string>
#include "Film.h"

class Clasic : Film{
    int an;
public:
    Clasic(const std::string &nume, const std::string &gen, const std::string &ora, int durata, float pret,
           const std::string &tehnologie, int pegi, int an) : Film(nume, gen, ora, durata, pret,tehnologie, pegi), an(an) {}
    ~Clasic() {}
};


#endif //OOP_CLASIC_H
