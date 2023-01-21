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

    Client(const std::string &nume, const std::string &prenume, int varsta);


    Client(const Client &copie);

    Client &operator=(const Client &other);

    friend std::ostream &operator<<(std::ostream &os, const Client &client);


    virtual ~Client();

    const std::string &getNume() const;

    void setNume(const std::string &Nume);

    const std::string &getPrenume() const;

    void setPrenume(const std::string &Prenume);

    int getVarsta() const;

    void setVarsta(int Varsta);
};
#endif //OOP_CLIENT_H
