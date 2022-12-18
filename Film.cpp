#include "Film.h"
using namespace std;


Film::Film(const Film &copie)
{
    nume=copie.nume;
    gen=copie.gen;
    ora=copie.ora;
    durata=copie.durata;
    pret=copie.pret;
}

Film&Film::operator=(const Film& other){
    nume = other.nume;
    gen = other.gen;
    ora = other.ora;
    durata = other.durata;
    pret= other.pret;
    return *this;
}
Film::~Film(){}


