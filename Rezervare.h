
#ifndef OOP_REZERVARE_H
#define OOP_REZERVARE_H

#include <ostream>
#include "Film.h"
#include "Client.h"
#include "Exceptii.h"

class Rezervare {
    int numar_loc;
    int numar_rand;
    float pret;
    Client client;
    Film film;
public:

    Rezervare(int &numar_loc, int &numar_rand, float pret, Client client, Film film) : numar_loc(numar_loc),
                                                                                                  numar_rand(
                                                                                                          numar_rand),
                                                                                                  pret(pret),
                                                                                                  client(client),
                                                                                                  film(film) {
        if (film.getPegi() == 18 && client.getVarsta() < film.getPegi()) {
            throw (eroare_varstaPegi());
        }
    }

    Rezervare &operator=(const Rezervare &other) {
        numar_loc = other.numar_loc;
        numar_rand = other.numar_rand;
        pret = other.pret;
        client = other.client;
        film = other.film;
        return *this;
    }

    ~Rezervare() {}

    friend std::ostream &operator<<(std::ostream &os, const Rezervare &Rezervare) {
        os << " numar_loc: " << Rezervare.numar_loc << " numar_rand: " << Rezervare.numar_rand << " pret: "
           << Rezervare.pret << " lei\n"
           << " Date client: " << Rezervare.client << " Date film: " << Rezervare.film << "\n";
        return os;
    }

    void reducere() {
        if (client.getVarsta() <= 12) {
            float p = film.getPret() - film.getPret() * 25 / 100;
            pret = p;
        }
    }

    void ochelari3D() {
        if (film.getTehnologie() == "3D") {
            float p = film.getPret() + 5;
            pret = p;
        } else pret = film.getPret();
    }

    float getPret() {
        return pret;
    }

    void setPret(int pret0) {
        pret = pret0;
    }

    int getNumar_loc() {
        return numar_loc;
    }

    void setNumar_loc(int numar_loc0) {
        numar_loc = numar_loc0;
    }

    int getNumar_rand() {
        return numar_rand;
    }

    void setNumar_rand(int numar_rand0) {
        numar_rand = numar_rand0;
    }
};
#endif //OOP_REZERVARE_H
