

#ifndef OOP_ANIMATIE_H
#define OOP_ANIMATIE_H

#include <string>
#include "Film.h"

class Animatie : public Film{
    std::string studio;
public:
    Animatie(const std::string &nume, const std::string &gen, const std::string &ora, int durata, float pret,
             const std::string &tehnologie, int pegi, const std::string &studio);

    ~Animatie() override;
    void afisare(std::ostream& os) const  override;

    Animatie &operator=(const Animatie &other);

    friend std::ostream &operator<<(std::ostream &os, const Animatie &animatie);

    std::shared_ptr<Film> clone() const override;
};


#endif //OOP_ANIMATIE_H
