#include "Rezervare.h"

using namespace std;


Rezervare::Rezervare(const Rezervare &copie)
{
    id=copie.id;
    numar_loc=copie.numar_loc;
    numar_rand=copie.numar_rand;
    client=copie.client;
    film=copie.film;
}

Rezervare&Rezervare::operator=(const Rezervare& other){
    id=other.id;
    numar_loc=other.numar_loc;
    numar_rand=other.numar_rand;
    client=other.client;
    film=other.film;
    return *this;
}
Rezervare::~Rezervare(){}

