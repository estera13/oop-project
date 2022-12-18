#include "Exceptii.h"
#include <string>
eroare::eroare(const std::string &arg) : runtime_error("Eroare: " + arg) {}

eroare_varstaPegi::eroare_varstaPegi() : eroare(" Filmul nu este recomandat persoanelor sub 18 ani!") {}

eroare_varsta::eroare_varsta() : eroare(" Varsta nu poate fi negativa!") {}
