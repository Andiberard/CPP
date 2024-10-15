/*
** EPITECH PROJECT, 2024
** CPP
** File description:
** main.cpp
*/

#include <iostream>
#include <fstream>
using namespace std;


/*cout-cin-et les autres stream (fd ) marchent pareils.*/
int my_read_file()
{
    char c;
    string word;
    string const filename(/*[Filename]*/);
    ifstream my_stream(filename.c_str());
//  ^ la différence est ici

    if (my_stream) {
        my_stream >> word; // mot
        cout << word << endl;
        my_stream.ignore();// pour changer de type de lecture

        getline(my_stream, word); //ligne
        cout << word << endl;
        my_stream.ignore();// pour changer de type de lecture

        my_stream.get(c); //char
        cout << c << endl;
        my_stream.ignore();// pour changer de type de lecture
    } else {
        cout << "erreur" << endl;
        return 84;
    }
    my_stream.close(); // methode pour close un file
    return 0;
}

int my_read_file()
{
    string word;
    string const filename(/*[Filename]*/);
    ofstream my_stream(filename.c_str());
//  ^ la différence est ici

    if (my_stream) {
        my_stream << "a"/*string, double ...etc*/;
    } else {
        cout << "erreur" << endl;
        return 84;
    }
    return 0;
}


/*
trouver position "curseur" dans mon file
pour : ifstream == tellg([fd])
pour : ofstream == tellp([fd])
*//*
déplacer "curseur" dans mon file
pour : ifstream == seekg([nb caractere], [pos])
pour : ofstream == seekp([nb caractere], [pos])

les [pos] possible : (ios::beg = begin, ios::cur = current, ios::end = end)
*/
int parcours_ofstream()
{
    ofstream my_stream("C:/Nanoc/data.txt");
    int pos = my_stream.tellp(); //On récupère la position

    my_stream.seekp(/*X*/, ios::cur);// On se déplace de X char depuis la position actuelle (current)

//  taille du file
    my_stream.seekp(0, ios::end);
    int lenght = my_stream.tellp();
}