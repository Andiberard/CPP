/*
** EPITECH PROJECT, 2024
** CPP
** File description:
** duree.cpp
*/

#include "duree.hpp"

using namespace std;

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
}

bool Duree::estEgal(Duree const& b) const
{
    return (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes);     //Teste si a.m_heure == b.m_heure etc.  
}


void Duree::afficher(ostream &flux) const
{
    flux << m_heures << "h, " << m_minutes << "m, " << m_secondes << "s";
}



///// OPERATOR :
void Duree::operator+=(const Duree& a)
{
    //1 : ajout des secondes
    m_secondes += a.m_secondes;
    //Si le nombre de secondes dépasse 60, on rajoute des minutes
    //Et on met un nombre de secondes inférieur à 60
    m_minutes += m_secondes / 60;
    m_secondes %= 60;

    //2 : ajout des minutes
    m_minutes += a.m_minutes;
    //Si le nombre de minutes dépasse 60, on rajoute des heures
    //Et on met un nombre de minutes inférieur à 60
    m_heures += m_minutes / 60;
    m_minutes %= 60;

    //3 : ajout des heures
    m_heures += a.m_heures;
}

Duree operator+(Duree const& a, Duree const& b)
{
    Duree copie(a);
    copie += b;
    return copie;
}

bool operator==(Duree const& a, Duree const& b)
{
    return a.estEgal(b);
}

ostream &operator<<(ostream &flux, Duree const& duree)
{
    duree.afficher(flux);
    return flux;
}
