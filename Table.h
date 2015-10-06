
include string

class Table
{
private : 
int : m_idTable;
Reservation : m_reservation ;
Commande: m_commande ; 
bool : m_disponnibilite ; 
std::string : m_type ; 
bool : m_localisation ; 

public : 
//Constructeur de table
Table (int m_idTable, Commande m_commande, bool m_disponnibilite, std::string m_type, bool m_localisation)

// Fonctions nécessaires pour manipuler les attribus de la table. 
void setidTable () ; 
void setReservation (reservation) ;
void setCommande () ;
void setType () ;

// Fonctions nécessaires pour voir les attributs de la table. 
void getTable () ; 
void getidTable () ;
void getReservation () ;
void getType () ;

};
