
#ifndef OOP_FILM_H
#define OOP_FILM_H

#include <ostream>
#include <memory>

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

    virtual std::shared_ptr<Film> clone() const = 0;


    float getPret() const;


    const std::string &getTehnologie() const;


    int getPegi() const;

};

#endif //OOP_FILM_H
