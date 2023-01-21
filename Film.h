
#ifndef OOP_FILM_H
#define OOP_FILM_H

#include <ostream>

class Film {
    std::string nume;
    std::string gen;
    std::string ora;
    int durata;
    float pret;
    std::string tehnologie;
    int pegi;
public:

    Film(const std::string &nume, const std::string &gen, const std::string &ora, int durata, float pret,
               const std::string &tehnologie, int pegi);

    Film(const Film &copie);

    virtual void afisare(std::ostream& os) const;

    Film &operator=(const Film &other);

    virtual ~Film();

    friend std::ostream &operator<<(std::ostream &os, const Film &film);

    const std::string &getNume() const;

    void setNume(const std::string &Nume);

    const std::string &getGen() const;

    void setGen(const std::string &Gen);

    const std::string &getOra() const;

    void setOra(const std::string &Ora);

    int getDurata() const;

    void setDurata(int Durata);

    float getPret() const;

    void setPret(float Pret);

    const std::string &getTehnologie() const;

    void setTehnologie(const std::string &Tehnologie);

    int getPegi() const;

    void setPegi(int Pegi);
};

#endif //OOP_FILM_H
