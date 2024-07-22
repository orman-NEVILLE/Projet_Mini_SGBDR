#ifndef REQUETE_H
#define REQUETE_H

#include "table.h"

typedef struct Condition {
    char* champ;
    char* operateur;
    char* valeur;
} Condition;

typedef struct Requete {
    char* table;
    Condition* conditions;
    int nb_conditions;
} Requete;

void creerTable(char* commande);
void ajouterDansTable(char* commande);
Table* selectionnerDonnees(Requete* requete);
void mettreAJourTable(char* commande);
void supprimerDeTable(char* commande);

void afficherDonnees(Table* table);
void executer(char *commande);


#endif // REQUETE_H
