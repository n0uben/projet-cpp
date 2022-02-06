#ifndef DEF_LIVRES_H
#define DEF_LIVRES_H

#include <string>
#include "Documents.h"

class Livres : public Documents
{
    public:
        //Constructeur
        Livres(std::string titre, int numen, std::string auteur);
        void auteur(std::string auteur);

        //Getters
        virtual std::string getAuteur() const;

        //Setters
        void setAuteur(std::string nouvelAuteur);

        //Methodes
        // virtual void afficher() const;

    protected:
        std::string auteur;
};

#endif