#include "Client.h"
#include <iostream>

Client::Client(const std::string &nume, const std::string &prenume, int varsta) : nume(nume), prenume(prenume), varsta(varsta) 

Client::Client(const Client &copie)
{
    nume=copie.nume;
    prenume=copie.prenume;
    varsta=copie.varsta;
}

Client& Client::operator=(const Client& other){
    nume = other.nume;
    prenume=other.prenume;
    varsta = other.varsta;
    return *this;
}
std::ostream &operator<<(std::ostream &os, const Client &client) {
    os << "nume: " << client.nume <<" prenume: "<< client.prenume << " varsta: " << client.varsta << " ani " <<"\n";
    return os;
};

int Client::getVarsta() {
    return varsta;
}
Client::~Client() {}

void Client::setVarsta(int varsta0) {
    varsta=varsta0;
}

void Client::setPrenume(const std::string &prenume0) {
    prenume = prenume0;
}

const std::string &Client::getPrenume() {
    return prenume;
}

void Client::setNume(const std::string &nume0) {
    nume = nume0;
}

const std::string &Client::getNume() {
    return nume;
}

