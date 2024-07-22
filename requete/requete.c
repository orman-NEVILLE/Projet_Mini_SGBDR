
#include "requete.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Implémentation des fonctions nécessaires
void creerTable(char* commande) {
    
    printf("Création de la table: %s\n", commande);
}

void ajouterDansTable(char* commande) {
    
    printf("Ajout de données dans la table: %s\n", commande);
}

Table* selectionnerDonnees(Requete* requete) {
    
    printf("Sélection des données dans la table: %s\n", requete->table);
    
    return NULL;
}

void mettreAJourTable(char* commande) {
    
    printf("Mise à jour de la table: %s\n", commande);
}

void supprimerDeTable(char* commande) {
   
    printf("Suppression de données de la table: %s\n", commande);
}

void afficherDonnees(Table* table) {

    if (table != NULL) {
        printf("Affichage des données de la table.\n");
    } else {
        printf("Aucune donnée à afficher.\n");
    }
}

void executer(char *commande) {
    if (strncmp(commande, "CREER TABLE", 11) == 0) {
        creerTable(commande);
    } else if (strncmp(commande, "AJOUTER DANS", 12) == 0) {
        ajouterDansTable(commande);
    } else if (strncmp(commande, "SELECTIONNER DE", 15) == 0) {
        // Pour simplifier, on passe une requête simple sans conditions.
        Requete requete = { .table = commande + 16, .conditions = NULL, .nb_conditions = 0 };
        Table* table = selectionnerDonnees(&requete);
        afficherDonnees(table);
    } else if (strncmp(commande, "METTRE A JOUR", 13) == 0) {
        mettreAJourTable(commande);
    } else if (strncmp(commande, "SUPPRIMER DE", 12) == 0) {
        supprimerDeTable(commande);
    } else {
        printf("Commande non reconnue : %s\n", commande);
    }
}


