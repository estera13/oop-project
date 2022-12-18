#include "Client.h"
using namespace std;


Client::Client(const Client &copie)
{
    nume=copie.nume;
    prenume=copie.prenume;
    varsta=copie.varsta;
}

Client&Client::operator=(const Client& other){
    nume = other.nume;
    prenume=other.prenume;
    varsta = other.varsta;
    return *this;
}
Client::~Client(){}






