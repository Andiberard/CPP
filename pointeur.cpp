/*
** EPITECH PROJECT, 2024
** CPP
** File description:
** main.cpp
*/

#include <iostream>
#include <string>

using namespace std;

int pointeur_allocation()
{
    int *pointeur(0);//tjs initialiser au moins à 0
    int popo(31);
    pointeur = new int;//demander de la mémoire (alloc)

    *pointeur = 3;
    cout << pointeur << endl;
    cout << *pointeur << endl;
    delete pointeur;//libérer la memoire (free)
    pointeur = 0;//les 2 ligne vont tjs ensemble
    return 0;
}
