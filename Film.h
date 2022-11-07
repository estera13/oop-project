#ifndef OOP_FILM_H
#define OOP_FILM_H

#include <ostream>

class Film{
    const int id;
    std::string nume;
    std::string gen;
    std::string ora;
    int durata;
    float pret;
public:

    Film();
    Film(const int id, const std::string &nume, const std::string &gen, const std::string &ora, int durata, float pret) : id(id), nume(nume), gen(gen), ora(ora), durata(durata), pret(pret) {}
    ~Film() {};
    Film(const Film &copie);

    friend std::ostream &operator<<(std::ostream &os, const Film &film) {
        os << "id: " << film.id << " nume: " << film.nume << " gen: " << film.gen << " ora: "
           << film.ora << " durata: " << film.durata << " minute" << " pret: " << film.pret<< " lei" <<"\n";
        return os;
    }

    const std::string &getNume()
    {
        return nume;
    }
    void setNume(const std::string &nume0)
    {
        nume = nume0;
    }

    const std::string &getGen()
    {
        return gen;
    }
    void setGen(const std::string &gen0)
    {
        gen = gen0;
    }

    const std::string &getOra()
    {
        return ora;
    }
    void setOra(const std::string &ora0)
    {
        ora = ora0;
    }

    int getDurata()
    {
        return durata;
    }
    void setDurata(int durata0)
    {
        durata=durata0;
    }

    float getPret()
    {
        return pret;
    }
    void setPret(int pret0)
    {
        pret=pret0;
    }

};


#endif //OOP_FILM_H
