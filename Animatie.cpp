
#include "Animatie.h"

Animatie::Animatie(const std::string &nume, const std::string &gen, const std::string &ora, int durata, float pret,
                   const std::string &tehnologie, int pegi, const std::string &studio) : Film(nume, gen, ora, durata,
                                                                                              pret, tehnologie, pegi),
                                                                                         studio(studio) {}

Animatie::~Animatie() {

}

void Animatie::afisare(std::ostream &os) const {
    Film::afisare(os);
    os<<"studio: "<<studio<<'\n';
}

Animatie &Animatie::operator=(const Animatie &other) {
    if (this != &other) {
        Film::operator=(other);
        this->studio = other.studio;
    }
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Animatie &animatie) {
    animatie.afisare(os);
    return os;
}
std::shared_ptr<Film>Animatie:: clone() const {
    return std::make_shared<Animatie>(*this); }