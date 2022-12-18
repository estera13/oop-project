
#ifndef OOP_FILM_H
#define OOP_FILM_H

#include <ostream>

class Film{
    std::string nume;
    std::string gen;
    std::string ora;
    int durata;
    float pret;
    std::string tehnologie;
    int pegi;
public:

    Film(const std::string &nume, const std::string &gen, const std::string &ora, int durata, float pret, const std::string &tehnologie, int pegi) ;
    ~Film();
    Film(const Film &);
    Film& operator=(const Film&);
    friend std::ostream &operator<<(std::ostream &os, const Film &film);
    const std::string &getNume ();
    void setNume(const std::string &nume0);
    const std::string &getGen();
    void setGen(const std::string &gen0);
    const std::string &getOra();
    void setOra(const std::string &ora0);
    int getDurata();
    void setDurata(int durata0);
    float getPret();
    void setPret(int pret0);
    const std::string &getTehnologie();
    int getPegi();
    void setPegi(int pegi0);
};

Film::Film(const std::string &nume, const std::string &gen, const std::string &ora, int durata, float pret, const std::string &tehnologie, int pegi): nume(nume), gen(gen), ora(ora), durata(durata), pret(pret) ,tehnologie(tehnologie), pegi(pegi) {}
Film::Film(const Film &copie)
{
    nume=copie.nume;
    gen=copie.gen;
    ora=copie.ora;
    durata=copie.durata;
    pret=copie.pret;
    tehnologie=copie.tehnologie;
    pegi=copie.pegi;
}

Film&Film::operator=(const Film& other){
    nume = other.nume;
    gen = other.gen;
    ora = other.ora;
    durata = other.durata;
    pret= other.pret;
    tehnologie=other.tehnologie;
    pegi=other.pegi;
    return *this;
}

Film::~Film() {}

std::ostream &operator<<(std::ostream &os, const Film &film)
{
    os << " nume: " << film.nume << " gen: " << film.gen << " ora: " << film.ora << " durata: " << film.durata << " minute" << " pret: " << film.pret<< " lei " << "tehnologie: " << film.tehnologie << " PEGI: "<< film.pegi<< "\n";
    return os;
};

const std::string &Film::getNume() {
    return nume;
}

void Film::setNume(const std::string &nume0) {
    nume = nume0;
}

const std::string &Film::getGen() {
    return gen;
}

void Film::setGen(const std::string &gen0) {
    gen = gen0;
}

const std::string &Film::getOra() {
    return ora;
}

void Film::setOra(const std::string &ora0) {
    ora = ora0;
}

int Film::getDurata() {
    return durata;
}

void Film::setDurata(int durata0) {
    durata=durata0;
}

float Film::getPret() {
    return pret;
}

void Film::setPret(int pret0) {
    pret=pret0;
}

const std::string &Film::getTehnologie() {
    return tehnologie;
}

int Film::getPegi() {
    return pegi;
}

void Film::setPegi(int pegi0) {
    pegi=pegi0;
}

#endif //OOP_FILM_H
