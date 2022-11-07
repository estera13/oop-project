#ifndef OOP_CLIENT_H
#define OOP_CLIENT_H

#include <iostream>

class Client{
    const int id;
    std::string nume;
    int varsta;

public:

    Client();
    Client(const int id, const std::string &nume, int varsta) : id(id), nume(nume), varsta(varsta) {};
    ~Client() {};
    friend std::ostream &operator<<(std::ostream &os, const Client &client) {
        os << "id: " << client.id << " nume: " << client.nume << " varsta: " << client.varsta << " ani " <<"\n";
        return os;
    }

    const std::string &getNume()
    {
        return nume;
    }
    void setNume(const std::string &nume0)
    {
        nume = nume0;
    }

    int getVarsta()
    {
        return varsta;
    }
    void setVarsta(int varsta0)
    {
        varsta=varsta0;
    }

};

#endif //OOP_CLIENT_H
