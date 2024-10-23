/*
** EPITECH PROJECT, 2024
** CPP
** File description:
** duree.hpp
*/

#ifndef DEF_DUREE
#define DEF_DUREE
#include <iostream>
#include <ostream>

class Duree
{
    public:

    Duree(int heures = 0, int minutes = 0, int secondes = 0);
    void operator+=(const Duree& a);
    void operator-=(const Duree& a);
    bool estEgal(Duree const& b) const;
    void afficher(std::ostream &flux) const;

    private:

    int m_heures;
    int m_minutes;
    int m_secondes;
};

Duree operator+(Duree const&a, Duree const& b);
std::ostream &operator<<(std::ostream &flux, Duree const& duree);
bool operator==(Duree const& a, Duree const& b);
#endif
