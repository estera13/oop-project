
#ifndef OOP_HORROR_H
#define OOP_HORROR_H
#include <string>
#include "Film.h"

class Horror : public Film{
   std::string regizor;
public:
    Horror(const std::string &nume, const std::string &gen, const std::string &ora, int durata, float pret,
         const std::string &tehnologie, int pegi, const std::string &regizor) : Film(nume, gen, ora, durata, pret,tehnologie, pegi), regizor(regizor) {}
    ~Horror() {}
    void afisare(std::ostream& os) const
    {
        Film::afisare(os);
        os<<regizor<<'\n';
    }

    Horror &operator=(const Horror &other) {
        if (this != &other) {
            Film::operator=(other);
            this->regizor = other.regizor;
        }
        return *this;
    }

    friend std::ostream &operator<<(std::ostream &os, const Horror &horror) {
        horror.afisare(os);
        return os;
    }
};


#endif //OOP_HORROR_H
