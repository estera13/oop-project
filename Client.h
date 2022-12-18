#ifndef OOP_CLIENT_H
#define OOP_CLIENT_H

#include <ostream>

class Client{
    std::string nume;
    std::string prenume;
    int varsta;

public:

    Client();
    Client(const std::string &nume, const std::string &prenume, int varsta) : nume(nume), prenume(prenume), varsta(varsta) {};
    ~Client() {};
    Client(const Client &);
    Client& operator=(const Client&);
    friend std::ostream &operator<<(std::ostream &os, const Client &client) {
        os << " nume: " << client.nume << " varsta: " << client.varsta << " ani " <<"\n";
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
