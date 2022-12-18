
#ifndef OOP_EXCEPTII_H
#define OOP_EXCEPTII_H


#include <stdexcept>
#include <string>

class eroare : public std::runtime_error {
public:
    eroare(const std::string &arg) : runtime_error("Eroare: " + arg) {};
};


class eroare_varstaPegi : public eroare {
public:
    eroare_varstaPegi() : eroare(" Filmul nu este recomandat persoanelor sub 18 ani!") {};
};

class eroare_varsta : public eroare {
public:
    eroare_varsta() : eroare(" Varsta nu poate fi negativa!") {};
};


#endif //OOP_EXCEPTII_H
