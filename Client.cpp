#include "Client.h"
using namespace std;


Client::Client(const Client &copie)
{
    nume=copie.nume;
    varsta=copie.varsta;
}

Client&Client::operator=(const Client& other){
    nume = other.nume;
    varsta = other.varsta;
    return *this;
}
Client::~Client(){}



