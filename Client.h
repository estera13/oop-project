#ifndef OOP_CLIENT_H
#define OOP_CLIENT_H

#include <ostream>

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

};

#endif //OOP_CLIENT_H
