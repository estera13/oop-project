#include <iostream>
#include <cstdlib>
#include "Film.h"
#include "Client.h"
#include "Rezervare.h"
#include "Exceptii.h"
#include "Horror.h"
#include "Comedie.h"
#include "Clasic.h"
#include "Cinema.h"
#include<vector>
#include<string>

int main()
{
    std::vector<Film> filme;
    std::vector<Comedie> comedii;
    std::vector<Horror> horror;
    std::vector<Clasic> clasice;
    std::vector<Client> clienti;

    filme.push_back(Film("Pulp Fiction","Actiune","15:00",154,22.00,"3D",18));
    filme.push_back(Film("Spiderman","Actiune","10:15",160,22.00,"2D",13));
    filme.push_back(Film("Home-Alone","Comedie","9:00",103,22.00,"2D",8));
    filme.push_back(Film("Black Swan","Thriller","21:00",108,22.00,"3D",18));
    filme.push_back(Film("Parasite","Thriller","19:15",132,22.00,"3D",18));
    filme.push_back(Film("Hereditary","Horror","22:00",127,22.00,"2D",18));
    filme.push_back(Film("Abominable","Animatie","13:00",97,22.00,"3D",3));
    filme.push_back(Film("Coraline","Animatie","17:00",96,22.00,"2D",13));
    comedii.push_back(Comedie("The Mask","Comedie","15:00",101,22.00,"2D",13,"Jim Carrey"));
    comedii.push_back(Comedie("Ace Ventura: Pet Detective","Comedie","10:15",86,22.00,"2D",13,"Jim Carrey"));
    comedii.push_back(Comedie("Zoolander","Comedie","9:00",103,22.00,"2D",8,"Ben Stiller"));
    comedii.push_back(Comedie("Night at the Museum","Comedie","21:00",108,22.00,"3D",3,"Ben Stiller"));
    horror.push_back(Horror("The Conjuring","Horror","19:15",132,22.00,"3D",18,"James Wan"));
    horror.push_back(Horror("Insidious","Horror","23:00",127,22.00,"2D",18,"James Wan"));
    horror.push_back(Horror("Annabelle 2","Horror","21:00",97,22.00,"3D",18,"James Wan"));
    horror.push_back(Horror("Midsommar","Horror","22:00",96,22.00,"2D",18,"Ari Aster"));
    clasice.push_back(Clasic("Breakfast at Tiffany's","Clasic","19:15",132,22.00,"3D",12,1961));
    clasice.push_back(Clasic("Roman Holiday","Clasic","22:00",127,22.00,"2D",12,1953));
    clasice.push_back(Clasic("Gone with the Wind","Clasic","13:00",97,22.00,"3D",3,1939));
    clasice.push_back(Clasic("Casablanca","Clasic","17:00",96,22.00,"2D",13,1942));

    Comedie film1("The Mask","Comedie","15:00",101,22.00,"2D",13,"Jim Carrey");
    Comedie film2("Ace Ventura: Pet Detective","Comedie","10:15",86,22.00,"2D",13,"Jim Carrey");
    Comedie film3("Zoolander","Comedie","9:00",103,22.00,"2D",8,"Ben Stiller");
    Comedie film4("Night at the Museum","Comedie","21:00",108,22.00,"3D",3,"Ben Stiller");
    Horror film5("The Conjuring","Horror","19:15",132,22.00,"3D",18,"James Wan");
    Horror film6("Insidious","Horror","23:00",127,22.00,"2D",18,"James Wan");
    Horror film7("Annabelle 2","Horror","21:00",97,22.00,"3D",18,"James Wan");
    Horror film8("Midsommar","Horror","22:00",96,22.00,"2D",18,"Ari Aster");
    Clasic film9("Breakfast at Tiffany's","Clasic","19:15",132,22.00,"3D",12,1961);
    Clasic film10("Roman Holiday","Clasic","22:00",127,22.00,"2D",12,1953);
    Clasic film11("Gone with the Wind","Clasic","13:00",97,22.00,"3D",3,1939);
    Clasic film12("Casablanca","Clasic","17:00",96,22.00,"2D",13,1942);

    Cinema c1;
    c1.adauga_film(&film1);
    c1.adauga_film(&film2);
    c1.adauga_film(&film3);
    c1.adauga_film(&film4);
    c1.adauga_film(&film5);
    c1.adauga_film(&film6);
    c1.adauga_film(&film7);
    c1.adauga_film(&film8);
    c1.adauga_film(&film9);
    c1.adauga_film(&film10);
    c1.adauga_film(&film11);
    c1.adauga_film(&film12);

    int cnt=-1;
    int x;
    std::cout<<"Bun venit la cinema! Pentru a efectua o rezervare apasati tasta 1 \n";
    while(std::cin>>x && (x==1))
    {
        std::string nume;
        std::cout<<"Introduceti numele: \n";
        std::cin>>nume;
        std::string prenume;
        std::cout<<"Introduceti prenumele: \n";
        std::cin>>nume;
        std::cout<<"Introduceti varsta: \n";
        int varsta;
        std::cin>>varsta;
        try {
            clienti.push_back(Client(nume, prenume, varsta));
            std::cout << "Alegeti un gen de film: \n";
            unsigned long x;
            std::cout << "1- Toate genurile \n";
            std::cout << "2- Comedie  \n";
            std::cout << "3- Horror  \n";
            std::cout << "4- Clasic \n";

            std::cin >> x;
            if (x == 1) {

                std::cout << "Alegeti un film: \n";
                unsigned long optiune;
                for (unsigned long i = 0; i < filme.size(); i++)
                    std::cout << i << ": " << filme[i] << '\n';
                std::cin >> optiune;
                try {
                    int seat = 1 + (rand() % 200);
                    int row = 1 + (rand() % 10);
                    Rezervare Bilet(seat, row, 0, clienti[cnt], filme[optiune]);
                    Bilet.ochelari3D();
                    Bilet.reducere();
                    std::cout << Bilet;
                    std::cout << "Pretul biletului este: " << Bilet.getPret() << " lei \n";
                    std::cout << "Vizionare placuta! \n";
                }
                catch (eroare_varstaPegi &eroare) {
                    std::cout << eroare.what() << "\n";
                }
                break;
            } else if (x == 2) {

                std::cout << "Alegeti un film: \n";
                unsigned long optiune;
                for (unsigned long i = 0; i < comedii.size(); i++)
                    std::cout << i << ": " << comedii[i] << '\n';
                std::cin >> optiune;
                try {
                    int seat = 1 + (rand() % 200);
                    int row = 1 + (rand() % 10);
                    Rezervare Bilet(seat, row, 0, clienti[cnt], comedii[optiune]);
                    Bilet.ochelari3D();
                    Bilet.reducere();
                    std::cout << Bilet;
                    std::cout << "Pretul biletului este: " << Bilet.getPret() << " lei \n";
                    std::cout << "Vizionare placuta! \n";
                }
                catch (eroare_varstaPegi &eroare) {
                    std::cout << eroare.what() << "\n";
                }
                break;
            } else if (x == 3) {
                std::cout << "Alegeti un film: \n";
                unsigned long i;
                for (unsigned long i = 0; i < horror.size(); i++)
                    std::cout << i << ": " << horror[i] << '\n';
                std::cin >> i;
                try {
                    int seat = 1 + (rand() % 200);
                    int row = 1 + (rand() % 10);
                    Rezervare Bilet(seat, row, 0, clienti[cnt], horror[i]);
                    Bilet.ochelari3D();
                    Bilet.reducere();
                    std::cout << Bilet;
                    std::cout << "Pretul biletului este: " << Bilet.getPret() << " lei \n";
                    std::cout << "Vizionare placuta! \n";
                }
                catch (eroare_varstaPegi &eroare) {
                    std::cout << eroare.what() << "\n";
                }
                break;
            } else if (x == 4) {
                std::cout << "Alegeti un film: \n";
                unsigned long i;
                for (unsigned long i = 0; i < clasice.size(); i++)
                    std::cout << i << ": " << clasice[i] << '\n';
                std::cin >> i;
                try {
                    int seat = 1 + (rand() % 200);
                    int row = 1 + (rand() % 10);
                    Rezervare Bilet(seat, row, 0, clienti[cnt], comedii[i]);
                    Bilet.ochelari3D();
                    Bilet.reducere();
                    std::cout << Bilet;
                    std::cout << "Pretul biletului este: " << Bilet.getPret() << " lei \n";
                    std::cout << "Vizionare placuta! \n";
                }
                catch (eroare_varstaPegi &eroare) {
                    std::cout << eroare.what() << "\n";
                }
                break;
            }
        }

        catch(eroare_varsta &eroare)
        {
            std::cout<<eroare.what()<<"\n";
        }
        std::cout<<"Pentru a efectua o alta rezervare apasati tasta 1! \n";
    }

    return 0;
}

