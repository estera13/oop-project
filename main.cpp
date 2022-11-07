#include <iostream>
#include "Film.h"
#include "Client.h"
#include "Rezervare.h"

int main()
{
    Film film(1,"Beetlejuice","Comedie horror","15:00",92,20.00);
    Client client(1,"Andreea",20);
    std::cout << film << "\n";
    std::cout<< client << "\n";
    return 0;
}
