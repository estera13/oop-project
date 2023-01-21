#include <iostream>
#include <cstdlib>
#include "Film.h"
#include "Client.h"
#include "Rezervare.h"
#include "Exceptii.h"
#include "Horror.h"
#include "Comedie.h"
#include "Clasic.h"
#include<vector>
#include<string>

int main()
{
    std::vector<Client> clienti;

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

    std::vector<Film*> filme;
    filme.push_back(&film1);
    filme.push_back(&film2);
    filme.push_back(&film3);
    filme.push_back(&film4);
    filme.push_back(&film5);
    filme.push_back(&film6);
    filme.push_back(&film7);
    filme.push_back(&film8);
    filme.push_back(&film9);
    filme.push_back(&film10);
    filme.push_back(&film11);
    filme.push_back(&film12);

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
            unsigned long int i=0;
            for(auto film : filme)
            {
                std::cout<<i<<": ";
                if(dynamic_cast<Comedie*>(film) != nullptr)
                {std::cout<<"Comedie:";
                    i++;}
                else if (dynamic_cast<Horror*>(film) != nullptr)
                {std::cout<<"Horror:";
                    i++;}
                else if(dynamic_cast<Clasic*>(film) != nullptr)
                { std::cout<<"Clasic:";
                    i++;}
                std::cout<<*film;}
            std::cin>>i;
            try{
                int random = 1+ (rand() % 200);
                int random1 = 1+ (rand() % 10);
                Rezervare Bilet(random, random1,0,clienti[cnt],*filme[i]);
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

