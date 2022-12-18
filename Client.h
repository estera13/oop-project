#ifndef OOP_CLIENT_H
#define OOP_CLIENT_H
#include <string>
#include <iostream>

class Client{
    std::string nume;
    std::string prenume;
    int varsta;

public:

    Client(const std::string &nume, const std::string &prenume, int varsta);
    ~Client();
    Client(const Client &);
    Client& operator=(const Client&);
    friend std::ostream &operator<<(std::ostream &os, const Client &client);
    const std::string &getNume();
    void setNume(const std::string &nume0);
    const std::string &getPrenume();
    void setPrenume(const std::string &prenume0);
    int getVarsta();
    void setVarsta(int varsta0);

};


#endif //OOP_CLIENT_H
