#ifndef OOP_REZERVARE_H
#define OOP_REZERVARE_H

#include <ostream>
#include "Film.h"
#include "Client.h"
class Rezervare{
     int numar_loc;
     int numar_rand;
    float pret;
    Client client;
    Film film;
public:

    Rezervare();
    Rezervare(  int &numar_loc,  int &numar_rand, float pret, Client client, Film film);
    ~Rezervare();
    Rezervare(const Rezervare &);
    Rezervare& operator=(const Rezervare&);
    friend std::ostream &operator<<(std::ostream &os, const Rezervare &Rezervare);
     void reducere();
     void ochelari3D();
     float getPret();
     void setPret(int pret0);
     int getNumar_loc();
     void setNumar_loc(int numar_loc0);
     int getNumar_rand();
     void setNumar_rand(int numar_rand0);
};

#endif //OOP_REZERVARE_H
