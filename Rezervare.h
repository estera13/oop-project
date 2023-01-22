
#ifndef OOP_REZERVARE_H
#define OOP_REZERVARE_H

#include <ostream>
#include "Film.h"
#include "Client.h"
#include "Comedie.h"
#include "Horror.h"
#include "Clasic.h"
#include "Exceptii.h"

class Rezervare {
    const int id;
    int numar_loc;
    int numar_rand;
    float pret;
    Client client;
    Film film;
    static int id_max;
    static float pret_ochelari;
public:

    Rezervare(const int id, int &numar_loc, int &numar_rand, float pret, const Client &client, const Film &film);

    Rezervare &operator=(const Rezervare &other);

    virtual ~Rezervare();

    friend std::ostream &operator<<(std::ostream &os, const Rezervare &Rezervare);

    void reducere();

    void ochelari3D();

    int getNumarLoc() const;

    void setNumarLoc(int numarLoc);

    int getNumarRand() const;

    void setNumarRand(int numarRand);

    float getPret() const;

    void setPret(float Pret);

    const Client &getClient() const;

    void setClient(const Client &Client);

    const Film &getFilm() const;

    void setFilm(const Film &Film);
};

#endif //OOP_REZERVARE_H
