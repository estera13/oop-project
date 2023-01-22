
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
    int numar_loc;
    int numar_rand;
    float pret;
    Client client;
    Film* film;
    static int id_max;
    static float pret_ochelari;
public:

    Rezervare(int &numar_loc, int &numar_rand, float pret, const Client &client, Film *film);

    Rezervare &operator=(const Rezervare &other);

    virtual ~Rezervare();

    friend std::ostream &operator<<(std::ostream &os, const Rezervare &Rezervare);

    void reducere();

    void ochelari3D();

    float getPret() const;


};

#endif //OOP_REZERVARE_H
