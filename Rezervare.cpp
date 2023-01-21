
#include "Rezervare.h"
#include "Exceptii.h"


Rezervare::Rezervare(int &numar_loc, int &numar_rand, float pret, Client client, Film film) : numar_loc(numar_loc),
                                                                                              numar_rand(
                                                                                                      numar_rand),
                                                                                              pret(pret),
                                                                                              client(client),
                                                                                              film(film) {
    if (film.getPegi() == 18 && client.getVarsta() < film.getPegi()) {
        throw (eroare_varstaPegi());
    }
}

Rezervare &Rezervare::operator=(const Rezervare &other) {
    numar_loc = other.numar_loc;
    numar_rand = other.numar_rand;
    pret = other.pret;
    client = other.client;
    film = other.film;
    return *this;
}

Rezervare::~Rezervare() {}

std::ostream &operator<<(std::ostream &os, const Rezervare &Rezervare) {
    os << " numar_loc: " << Rezervare.numar_loc << " numar_rand: " << Rezervare.numar_rand << " pret: "
       << Rezervare.pret << " lei\n"
       << " Date client: " << Rezervare.client << " Date film: " << Rezervare.film << "\n";
    return os;
}

void Rezervare::reducere() {
    if (client.getVarsta() <= 12) {
        float p = film.getPret() - film.getPret() * 25 / 100;
        pret = p;
    }
}

void Rezervare::ochelari3D() {
    if (film.getTehnologie() == "3D") {
        float p = film.getPret() + 5;
        pret = p;
    } else pret = film.getPret();
}


int Rezervare::getNumarLoc() const {
    return numar_loc;
}

void Rezervare::setNumarLoc(int numarLoc) {
    numar_loc = numarLoc;
}

int Rezervare::getNumarRand() const {
    return numar_rand;
}

void Rezervare::setNumarRand(int numarRand) {
    numar_rand = numarRand;
}

float Rezervare::getPret() const {
    return pret;
}

void Rezervare::setPret(float pret) {
    this->pret = pret;
}

const Client &Rezervare::getClient() const {
    return client;
}

void Rezervare::setClient(const Client &client) {
    this->client = client;
}

const Film &Rezervare::getFilm() const {
    return film;
}

void Rezervare::setFilm(const Film &film) {
    this->film = film;
}
