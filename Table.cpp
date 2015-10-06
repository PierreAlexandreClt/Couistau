
#include "Table.hpp"
#include <string>


//Implémentation constructeur a checker!!
Table::Table (int m_idTable, Commande m_commande, bool m_disponnibilite, string m_type, string m_localisation)
{
    cout << "Quel est l'ID de la Table?" <<endl;
    setIdTable (int a);
    
    cout << "Quel est le nombre de place sur la table?" <<endl;
    setNbrPlace (int a);
    
    
    m_disponnibilite = true; 
    
    cout << "Quel est le type de la table? (Ronde/Carre) " <<endl;
    setType (string a);
    
    cout << "Ou est placé cette nouvelle table? (terrasse ou interieur uniquement)" <<endl
    setLocalisation (string a);
    
};


//Fonctions Get,
int Table::getidTable ()
{
    return m_idTable;
};

int Table::getNbrPlace ()
{
    return m_nbrPlace;
};


void Table::getType ()
{
    return m_Type;
};

void Table::getLocalisation ()
{
 if (m_localisation = true)
     return "Terrasse";
    else return "Interieur";
};

bool Table::getDisponnibilité ()
{
    return m_disponnibilite;
};


void Table::getTable ()
{
    cout <<"l'Id de la table est : " <<getidTable() << endl;
    cout <<"le nombre de place sur la table est : " <<getNbrPlace() << endl;
    cout <<"la table est elle disponnible?  : " <<getDisponnibilite() << endl;
    cout <<"Le type de la table est : " <<getType() << endl;
cout <<"Où est elle localisée : " <<getLocalisation() << endl;
};


//Fonctions Set,

void setidTable (int a)
{
    m_idTable = a;
};

void setNbrPlace (int a)
{
    m_nbrPlace = a;
};

void setType (string a) ;
{
    if(a == "ronde")
    {
        m_type = true;
        else if (a == "carre")
            m_type = false;
            else return "type non reconnu";
    }
};

void setLocalisation (string a)
{
    if(a == "fenetre")
    {
        m_localisation = true;
        else if (a == "interieur")
            m_localisation = false;
        else return "localisation non reconnu";
    }
};

void setDisponnibilite (string a)
{
    if(a == "disponnible")
    {
        m_disponnibilite = true;
        else
        m_disponnibilite = false ;
    }
};


