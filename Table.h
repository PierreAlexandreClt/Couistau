
//
//  Table.hpp


#ifndef Table_hpp
#define Table_hpp

#include <stdio.h>



class Table
{
    private :
    int : m_idTable;
    int : m_nbrPlace;
    bool : m_disponnibilite ;
    std::string : m_type ;
    std::string : m_localisation ;
    
    
    public :
    //Constructeur de table
    Table (int m_idTable, Commande m_commande, bool m_disponnibilite, std::string m_type, bool m_localisation)

    
    // Fonctions nécessaires pour voir les attributs de la table.
    void getTable () ; //Fonction qui renvoie l'integralite des informations d'une Table.
    int getidTable () ;
    int getNbrPlace () ;
    void getType () ;
    void getLocalisation () ;
    bool getDisponnibilite () ;
   
   
    
    // Fonctions nécessaires pour manipuler les attribus de la table.
    void setidTable (int a) ;
    void setNbrPlace (int a) ;
    void setType (std::string a) ;
    void setLocalisation (std::string a);
    void setDisponnibilite (std::string a) ;

};

