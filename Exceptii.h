#ifndef OOP_EXCEPTII_H
#define OOP_EXCEPTII_H


#include <stdexcept>
#include <string>

class eroare : public std::runtime_error {
public:
    eroare(const std::string &arg);
};


class eroare_varstaPegi : public eroare {
public:
    eroare_varstaPegi();
};

class eroare_varsta : public eroare {
public:
    eroare_varsta();
};
#endif //OOP_EXCEPTII_H
