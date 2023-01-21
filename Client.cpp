

#include "Client.h"

Client::Client(const std::string &nume, const std::string &prenume, int varsta) : nume(nume), prenume(prenume),
                                                                                  varsta(varsta) {
    if (varsta < 0) throw eroare_varsta();
    try{
        for(unsigned long i = 0 ; i < nume.length() ; i++)
            if(!(isalpha(nume[i])) && nume[i] != ' ')
                throw 1;

        for(unsigned long i = 0 ; i < prenume.length() ; i++)
            if(!(isalpha(prenume[i])) && prenume[i] != ' ')
                throw 2;
    }

    catch(int i)
    {
        if(i == 1)
            std::cout<<"Numele clientului poate contine doar litere." << std::endl;
        else std::cout <<"Prenumele clientului poate contine doar litere." << std::endl;
        exit(EXIT_FAILURE);
    }
}

Client::Client(const Client &copie) : nume(copie.nume), prenume(copie.prenume) {
    varsta = copie.varsta;
}

Client &Client::operator=(const Client &other) {
    nume = other.nume;
    prenume = other.prenume;
    varsta = other.varsta;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Client &client) {
    os << "nume: " << client.nume << " prenume: " << client.prenume << " varsta: " << client.varsta << " ani "
       << "\n";
    return os;
}


Client::~Client() {}


const std::string &Client::getNume() const {
    return nume;
}

void Client::setNume(const std::string &nume) {
    Client::nume = nume;
}

const std::string &Client::getPrenume() const {
    return prenume;
}

void Client::setPrenume(const std::string &prenume) {
    Client::prenume = prenume;
}

int Client::getVarsta() const {
    return varsta;
}

void Client::setVarsta(int varsta) {
    Client::varsta = varsta;
}
