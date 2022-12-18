#ifndef OOP_CLIENT_H
#define OOP_CLIENT_H
#include <string>
#include <iostream>
#include "Exceptii.h"

class Client {
    std::string nume;
    std::string prenume;
    int varsta;

public:

    Client(const std::string &nume, const std::string &prenume, int varsta) : nume(nume), prenume(prenume),
                                                                                      varsta(varsta) {

        if (varsta < 0) throw eroare_varsta();
    }

    Client(const Client &copie) {
        nume = copie.nume;
        prenume = copie.prenume;
        varsta = copie.varsta;
    }

    Client &operator=(const Client &other) {
        nume = other.nume;
        prenume = other.prenume;
        varsta = other.varsta;
        return *this;
    }

    friend std::ostream &operator<<(std::ostream &os, const Client &client) {
        os << "nume: " << client.nume << " prenume: " << client.prenume << " varsta: " << client.varsta << " ani "
           << "\n";
        return os;
    }

    int getVarsta() {
        return varsta;
    }

    ~Client() {}

    void setVarsta(int varsta0) {
        varsta = varsta0;
    }

    void setPrenume(const std::string &prenume0) {
        prenume = prenume0;
    }

    const std::string &getPrenume() {
        return prenume;
    }

    void setNume(const std::string &nume0) {
        nume = nume0;
    }

    const std::string &getNume() {
        return nume;
    }
};
#endif //OOP_CLIENT_H
