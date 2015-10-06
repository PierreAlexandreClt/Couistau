
#ifndef Plat_hpp
#define Plat_hpp

#include <stdio.h>

class Plat
{
    private :
    std::string m_intitule ;
    bool m_type ;
    int m_prix ;

    public :
    //Constructeur d'entrée
    Plat (std::string intitule, bool type,  int prix);

    //Fonctions Set,
    void setIntitule (std::string a) ;
    void setType (std::string a) ;
    void setPrix (int a) ;
    
    //Fonctions accesseurs,
    void getPlat () ;
    void getIntitule () ;
    bool getType () ;
    int getPrix () ;
    
};
