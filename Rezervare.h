#ifndef OOP_REZERVARE_H
#define OOP_REZERVARE_H

#include <ostream>
#include "Film.h"
#include "Client.h"

class Rezervare{
    const int id;
    int numar_loc;
    int numar_rand;
    Client client;
    Film film;
public:

    Rezervare();
    Rezervare(const int id, const int &numar_loc, const int &numar_rand, const Client &client, const Film &film) : id(id), numar_loc(numar_loc), numar_rand(numar_rand), client(client),film (film) {};
    ~Rezervare() {};

    friend std::ostream &operator<<(std::ostream &os, const Rezervare &Rezervare) {
        os << "id: " << Rezervare.id << " numar_loc: " << Rezervare.numar_loc << " numar_rand: " << Rezervare.numar_rand
        << " client: " << Rezervare.client << " film: " << Rezervare.film <<"\n";
        return os;
    }

    void reducere()
    {
        if (client.getVarsta()<=12)
        {
            float p=film.getPret()-film.getPret()*25/100;
            film.setPret(p);
            std::cout<<film.getPret()<<" lei"<<'\n';
        }
    };

    void ochelari3D()
    {
        if(film.getTehnologie()=="3D")
        {
            float p=film.getPret()+5;
            film.setPret(p);
            std::cout<<film.getPret()<<" lei"<<'\n';
        }
    }

    void restrictieVarsta()
    {
        if(client.getVarsta()<film.getPegi())
        {
            std::cout<<"Eroare varsta"<<'\n';
        }
    }


    int getNumar_loc()
    {
        return numar_loc;
    }
    void setNumar_loc(int numar_loc0)
    {
        numar_loc=numar_loc0;
    }

    int getNumar_rand()
    {
        return numar_rand;
    }
    void setNumar_rand(int numar_rand0)
    {
        numar_rand=numar_rand0;
    }

};

#endif //OOP_REZERVARE_H
