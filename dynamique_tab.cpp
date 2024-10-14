/*
** EPITECH PROJECT, 2024
** CPP
** File description:
** dynamique_tab.cpp
*/

#include <iostream>
#include <string>
#include <vector> //Ne pas oublier !
using namespace std;

int my_push_back()
{
   vector<double> notes;

   notes.push_back(12.5);
   notes.push_back(19.5);
   notes.push_back(6);
   notes.push_back(12);
   notes.push_back(14.5);
   notes.push_back(15);
   
   double moyenne(0);
   for(int i(0); i<notes.size(); ++i) {
      moyenne += notes[i];
   }

   moyenne /= notes.size();
   
   cout << "Votre moyenne est : " << moyenne << endl;

   return 0;
}

int replace_char_in_str()
{
   string nomUtilisateur("Julien");
   cout << "Vous etes " << nomUtilisateur << "." <<endl;

   nomUtilisateur[0] = 'L';
   nomUtilisateur[2] = 'c';

   cout << "Ah non, vous etes " << nomUtilisateur << "!" << endl;

   return 0;
}

int str_cat()
{
   string prenom("Albert"); 
   string nom("Einstein");
   
   string total;
   total += prenom;
   total += " ";
   total += nom;

   cout << "Vous vous appelez " << total << "." << endl; 

   return 0;
}