
#ifndef OOP_CINEMA_H
#define OOP_CINEMA_H

#include "Film.h"
#include "Client.h"
#include "Rezervare.h"
#include "Exceptii.h"
#include "Horror.h"
#include "Comedie.h"
#include "Clasic.h"
#include<vector>
#include<string>
#include <ostream>

class Cinema {
    std::vector<Film*> filme;
    std::string nume;
public:
    Cinema(const std::vector<Film *> &filme=*(new std::vector<Film*>()), const std::string &nume="");
    virtual ~Cinema();
    void adauga_film(Film *film);
    void afisare_film(std::ostream& os) const;

    friend std::ostream &operator<<(std::ostream &os, const Cinema &cinema)
    {
        cinema.afisare_film(os);
        return os;
    }

};


#endif //OOP_CINEMA_H
