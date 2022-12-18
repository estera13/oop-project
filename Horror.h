
#ifndef OOP_HORROR_H
#define OOP_HORROR_H
#include <string>
#include "Film.h"

class Horror : Film{
   std::string regizor;
public:
    Horror(const std::string &nume, const std::string &gen, const std::string &ora, int durata, float pret,
         const std::string &tehnologie, int pegi, const std::string regizor) : Film(nume, gen, ora, durata, pret,tehnologie, pegi), regizor(regizor) {}
    ~Horror() {}
};


#endif //OOP_HORROR_H
