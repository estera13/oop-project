
#ifndef OOP_EXCEPTII_H
#define OOP_EXCEPTII_H


#include <stdexcept>
#include <string>

class eroare_baza : public std::runtime_error {
public:
   explicit eroare_baza(const std::string &arg) : runtime_error("Eroare: " + arg) {};
};


class eroare_varstaPegi : public eroare_baza {
public:
   explicit eroare_varstaPegi() : eroare_baza(" Filmul nu este recomandat persoanelor sub 18 ani!") {};
};

class eroare_varsta : public eroare_baza {
public:
    explicit eroare_varsta() : eroare_baza(" Varsta nu poate fi negativa!") {};
};


#endif //OOP_EXCEPTII_H
