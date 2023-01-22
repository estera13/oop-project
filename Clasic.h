
#ifndef OOP_CLASIC_H
#define OOP_CLASIC_H

#include <string>
#include "Film.h"

class Clasic : public Film{
    int an;
public:
    Clasic(const std::string &nume, const std::string &gen, const std::string &ora, int durata, float pret,
           const std::string &tehnologie, int pegi, int an);
    ~Clasic();
     void afisare(std::ostream& os) const override;

    Clasic &operator=(const Clasic &other);

    friend std::ostream &operator<<(std::ostream &os, const Clasic &clasic);

    std::shared_ptr<Film> clone() const override;
};


#endif //OOP_CLASIC_H
