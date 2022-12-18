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


#endif //OOP_FILM_H
