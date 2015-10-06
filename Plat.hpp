
#include "Plat.hpp"
#include <string>


//Constructeur d'entrée
Plat :: Plat (std::string intitule, bool type,  int prix)
{
    cout <<"Quel nom voulez vous pour votre plat?  : "  <<endl;
    
    setIntitule (intitule);
    
    cout <<"Le plat est un/une "  <<endl;
    
    setType (type);
    
    cout <<"Il est facturé " <<setPrix <<endl;

    setPrix (prix); 
    
};

//Fonctions Set,
void setIntitule (std::string a) ;
{
    m_intitule = a;
};
void setType (string a) ;
{
    if
};

void setPrix (int a) ;
{
    m_prix = a;
};

//Fonctions accesseurs,
void getPlat ()
{
    cout <<"L'intitulé du plat est : " <<getIntitule <<endl;
    
    cout <<"Le plat est un/une " <<getType <<endl;
    
     cout <<"Il est facturé " <<getPrix <<"au client." <<endl;
    
};

void getIntitule ()
{
    return m_intitule ;
};

bool getType ()
{
    return m_type;
};

int getPrix ()
{
    return m_prix; 
};
