

#include "Comedie.h"

Comedie::Comedie(const std::string &nume, const std::string &gen, const std::string &ora, int durata, float pret,
                 const std::string &tehnologie, int pegi, const std::string &actor_principal) : Film(nume, gen, ora, durata, pret,tehnologie, pegi), actor_principal(actor_principal) {}

Comedie::~Comedie() {}

void Comedie::afisare(std::ostream &os) const {
    Film::afisare(os);
    os<<"actor principal: "<<actor_principal<<'\n';
}

Comedie &Comedie::operator=(const Comedie &other) {
    if (this != &other) {
        Film::operator=(other);
        this->actor_principal = other.actor_principal;
    }
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Comedie &comedie) {
    comedie.afisare(os);
    return os;
}
std::shared_ptr<Film>Comedie:: clone() const {
    return std::make_shared<Comedie>(*this); }