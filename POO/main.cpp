/*
** EPITECH PROJECT, 2024
** CPP
** File description:
** main.cpp
*/

#include <iostream>
#include <ostream>
#include "personnage.hpp"

using namespace std;

int main()
{
    Personnage david;
    Personnage goliath = david;

    david.afficheEtat();
    david.AfficherPointeurArme();
    goliath.afficheEtat();
    goliath.AfficherPointeurArme();
    return 0;
}
