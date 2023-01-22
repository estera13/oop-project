
#include "Horror.h"

Horror::Horror(const std::string &nume, const std::string &gen, const std::string &ora, int durata, float pret,
               const std::string &tehnologie, int pegi, const std::string &regizor) : Film(nume, gen, ora, durata, pret,tehnologie, pegi), regizor(regizor) {}

Horror::~Horror() {}

void Horror::afisare(std::ostream &os) const {
    Film::afisare(os);
    os<<"regizor: "<<regizor<<'\n';
}

Horror &Horror::operator=(const Horror &other) {
    if (this != &other) {
        Film::operator=(other);
        this->regizor = other.regizor;
    }
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Horror &horror) {
    horror.afisare(os);
    return os;
}

std::shared_ptr<Film>Horror:: clone() const {
    return std::make_shared<Horror>(*this); }