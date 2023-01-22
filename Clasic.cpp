
#include "Clasic.h"

Clasic::Clasic(const std::string &nume, const std::string &gen, const std::string &ora, int durata, float pret,
               const std::string &tehnologie, int pegi, int an) : Film(nume, gen, ora, durata, pret,tehnologie, pegi), an(an) {}

Clasic::~Clasic() {}

void Clasic::afisare(std::ostream &os) const {
    Film::afisare(os);
    os<<"an: "<<an<<'\n';
}

Clasic &Clasic::operator=(const Clasic &other) {
    if (this != &other) {
        Film::operator=(other);
        this->an = other.an;
    }
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Clasic &clasic) {
    clasic.afisare(os);
    return os;
}

std::shared_ptr<Film>Clasic:: clone() const {
    return std::make_shared<Clasic>(*this); }