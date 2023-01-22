
#ifndef OOP_HORROR_H
#define OOP_HORROR_H
#include <string>
#include "Film.h"

class Horror : public Film{
   std::string regizor;
public:
    Horror(const std::string &nume, const std::string &gen, const std::string &ora, int durata, float pret,
         const std::string &tehnologie, int pegi, const std::string &regizor);
    ~Horror();
    void afisare(std::ostream& os) const override;

    Horror &operator=(const Horror &other);

    friend std::ostream &operator<<(std::ostream &os, const Horror &horror);

    std::shared_ptr<Film> clone() const override;
};


#endif //OOP_HORROR_H
