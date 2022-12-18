#include "Rezervare.h"

using namespace std;


Rezervare&Rezervare::operator=(const Rezervare& other){
    numar_loc=other.numar_loc;
    numar_rand=other.numar_rand;
    client=other.client;
    film=other.film;
    return *this;
}
Rezervare::~Rezervare(){}

