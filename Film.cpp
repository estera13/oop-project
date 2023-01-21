
#include "Film.h"


Film::Film(const std::string &nume, const std::string &gen, const std::string &ora, int durata, float pret,
           const std::string &tehnologie, int pegi) : nume(nume), gen(gen), ora(ora), durata(durata), pret(pret),
                                                      tehnologie(tehnologie), pegi(pegi) {}

Film::Film(const Film &copie) :nume(copie.nume), gen(copie.gen), ora(copie.ora), tehnologie(copie.tehnologie) {
    durata = copie.durata;
    pret = copie.pret;
    pegi = copie.pegi;
}

void Film::afisare(std::ostream &os) const {
    os << " nume: " << nume << " gen: " << gen << " ora: " << ora << " durata: " << durata
       << " minute" << " pret: " << pret << " lei " << "tehnologie: " << tehnologie << " PEGI: "
       << pegi << "\n";
}

Film &Film::operator=(const Film &other) {
    nume = other.nume;
    gen = other.gen;
    ora = other.ora;
    durata = other.durata;
    pret = other.pret;
    tehnologie = other.tehnologie;
    pegi = other.pegi;
    return *this;
}

Film::~Film() {}

std::ostream &operator<<(std::ostream &os, const Film &film) {
    film.afisare(os);
    return os;
}

float Film::getPret() const {
    return pret;
}

void Film::setPret(float Pret) {
    this->pret = Pret;
}

const std::string &Film::getTehnologie() const {
    return tehnologie;
}

void Film::setTehnologie(const std::string &Tehnologie) {
    this->tehnologie = Tehnologie;
}

int Film::getPegi() const {
    return pegi;
}

void Film::setPegi(int Pegi) {
    this->pegi = Pegi;
}
