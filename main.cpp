#include <iostream>
#include <cstdlib>
#include "Film.h"
#include "Client.h"
#include "Rezervare.h"
#include "Exceptii.h"
#include<vector>
#include<string>

int main()
{
    std::vector<Film> filme;
    std::vector<Client> clienti;
    filme.push_back(Film("Pulp Fiction","Actiune","15:00",154,22.00,"3D",18));
    filme.push_back(Film("Spiderman","Actiune","10:15",160,22.00,"2D",13));
    filme.push_back(Film("Home-Alone","Comedie","9:00",103,22.00,"2D",8));
    filme.push_back(Film("Black Swan","Thriller","21:00",108,22.00,"3D",18));
    filme.push_back(Film("Parasite","Thriller","19:15",132,22.00,"3D",18));
    filme.push_back(Film("Hereditary","Horror","22:00",127,22.00,"2D",18));
    filme.push_back(Film("Abominable","Animatie","13:00",97,22.00,"3D",3));
    filme.push_back(Film("Coraline","Animatie","17:00",96,22.00,"2D",13));

    int cnt=-1;
    int x;
    std::cout<<"Bun venit la cinema! Pentru a efectua o rezervare apasati tasta 1 \n";
    while(std::cin>>x && (x==1))
    {
        std::string prenume;
        std::cout<<"Introduceti prenumele: \n";
        std::cin>>prenume;
        std::string nume;
        std::cout<<"Introduceti numele: \n";
        std::cin>>nume;
        std::cout<<"Introduceti varsta: \n";
        int varsta;
        std::cin>>varsta;
        try {clienti.push_back(Client(nume, prenume ,varsta));
            cnt++;
            std::cout<<"Alegeti un film: \n";
            int i;
            for(i=0;i<filme.size();i++)
                std::cout<<i<<": "<<filme[i]<<'\n';
            std::cin>>i;
            try{int random = 1+ (rand() % 200);
                int random1 = 1+ (rand() % 10);
                Rezervare Bilet(random, random1,0,clienti[cnt],filme[i]);
                Bilet.ochelari3D();
                Bilet.reducere();
                std::cout<<Bilet;
                std::cout<<"Pretul biletului este: "<<Bilet.getPret()<<" lei \n";
                std::cout<<"Vizionare placuta! \n";
            }
            catch(eroare_varstaPegi &eroare)
            {
                std::cout<<eroare.what()<<"\n";
            }}
        catch(eroare_varsta &eroare)
        {
            std::cout<<eroare.what()<<"\n";
        }
        std::cout<<"Pentru a efectua o alta rezervare apasati tasta 1! \n";
    }
    return 0;
}
