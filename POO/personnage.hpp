#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>
#include "arme.hpp"

class Personnage
{
    public:

    ~Personnage();
    Personnage ();
    Personnage (Personnage const& personnageACopier);
    Personnage(std::string nomArme, int degatsArme);
    void afficheEtat();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
    void AfficherPointeurArme();
    Personnage& operator=(Personnage const& personnageACopier);

    private:

    int m_vie;
    int m_mana;
    Arme *m_arme;
};

#endif
