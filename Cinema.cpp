

#include "Cinema.h"

Cinema::Cinema(const std::vector<Film *> &filme, const std::string &nume) : filme(filme), nume(nume) {}

Cinema::~Cinema() {}

void Cinema::adauga_film(Film *film) {
    filme.push_back(film);
}

void Cinema::afisare_film(std::ostream &os) const {
    for(auto film : filme)
    {
        if(dynamic_cast<Comedie*>(film) != nullptr)
            std::cout<<"Comedie:";
        else if (dynamic_cast<Horror*>(film) != nullptr)
            std::cout<<"Horror:";
        else if(dynamic_cast<Clasic*>(film) != nullptr)
            std::cout<<"Clasic:";

        film->afisare(os);
    }
}

