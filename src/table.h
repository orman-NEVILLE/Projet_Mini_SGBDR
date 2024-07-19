#ifndef TABLE_H
#define TABLE_H

// Définition des types de données pour les champs
typedef enum {
    ENTIER,
    CHAINE
} TypeChamp;

// Structure pour représenter un champ
typedef struct {
    char nom[50];
    TypeChamp type;
} Champ;

// Structure pour représenter une table
typedef struct {
    char nom[50];
    int nombreChamps;
    Champ *champs;
} Table;


#endif 
