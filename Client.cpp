#include "Client.h"
using namespace std;


Client::Client(const Client &copie)
{
    id=copie.id;
    nume=copie.nume;
    varsta=copie.varsta;
}

Client&Client::operator=(const Client& other){
    id = other.id;
    nume = other.nume;
    varsta = other.varsta;
    return *this;
}
Client::~Client(){}




