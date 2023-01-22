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

    Comedie c1("The Mask","Comedie","15:00",101,22.00,"2D",13,"Jim Carrey");
    Comedie c2("Ace Ventura: Pet Detective","Comedie","10:15",86,22.00,"2D",13,"Jim Carrey");
    Comedie c3("Zoolander","Comedie","9:00",103,22.00,"2D",8,"Ben Stiller");
    Comedie c4("Night at the Museum","Comedie","21:00",108,22.00,"3D",3,"Ben Stiller");
    Horror h1("The Conjuring","Horror","19:15",132,22.00,"3D",18,"James Wan");
    Horror h2("Insidious","Horror","23:00",127,22.00,"2D",18,"James Wan");
    Horror h3("Annabelle 2","Horror","21:00",97,22.00,"3D",18,"James Wan");
    Horror h4("Midsommar","Horror","22:00",96,22.00,"2D",18,"Ari Aster");
    Clasic cl1("Breakfast at Tiffany's","Clasic","19:15",132,22.00,"3D",12,1961);
    Clasic cl2("Roman Holiday","Clasic","22:00",127,22.00,"2D",12,1953);
    Clasic cl3("Gone with the Wind","Clasic","13:00",97,22.00,"3D",3,1939);
    Clasic cl4("Casablanca","Clasic","17:00",96,22.00,"2D",13,1942);
    auto f = {c1.clone(), c2.clone(),c3.clone(),c4.clone(),h1.clone(),h2.clone(),h3.clone(), h4.clone(), cl1.clone(),cl2.clone(),cl3.clone(),cl4.clone()};
    std::vector<Film*> filme;
    filme.push_back(&c1);
    filme.push_back(&c2);
    filme.push_back(&c3);
    filme.push_back(&c4);
    filme.push_back(&h1);
    filme.push_back(&h2);
    filme.push_back(&h3);
    filme.push_back(&h4);
    filme.push_back(&cl1);
    filme.push_back(&cl2);
    filme.push_back(&cl3);
    filme.push_back(&cl4);
    for( const auto &film: f)
         std::cout << *film<< "\n";
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


