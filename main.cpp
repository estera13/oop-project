#include <iostream>
#include "Film.h"
#include "Client.h"
#include "Rezervare.h"
#include<vector>

int main()
{
    std::vector<Rezervare> bilete;
    std::vector<Film> filme;
    std::vector<Client> clienti;

    filme.push_back(Film("Beetlejuice","Comedie horror","15:00",92,22.00,"3D",12));
    filme.push_back(Film("Spiderman","Actiune","10:15",160,22.00,"2D",16));
    filme.push_back(Film("Home-Alone","Comedie","9:00",103,22.00,"2D",8));
    filme.push_back(Film("Black Swan","Thriller","21:00",108,22.00,"3D",18));
    filme.push_back(Film("Parasite","Thriller","19:15",132,22.00,"3D",18));
    filme.push_back(Film("Hereditary","Horror","22:00",127,22.00,"2D",18));
    filme.push_back(Film("Abominable","Animatie","13:00",97,22.00,"3D",3));
    clienti.push_back(Client("Ionescu", "Andreea" ,16));
    clienti.push_back(Client("Anton", "Cosmin", 21));
    clienti.push_back(Client("Popescu", "Sabina", 11));
    bilete.push_back(Rezervare(0,2,3,{"Ionescu", "Andreea" ,16},{"Hereditary","Horror","22:00",127,22.00,"2D",18}));
    bilete.push_back(Rezervare(0,2,3,{"Popescu", "Sabina", 11},{"Abominable","Animatie","13:00",97,22.00,"3D",3}));
    bilete[1].reducere();
    bilete[1].ochelari3D();

    return 0;
}
