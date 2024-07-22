void executer(char *commande) {
    if (strncmp(commande, "CREER TABLE", 11) == 0) {
        // Analyser et exécuter la commande de création de table
    } else if (strncmp(commande, "AJOUTER DANS", 12) == 0) {
        // Analyser et exécuter la commande d'insertion de données
    } else if (strncmp(commande, "SELECTIONNER DE", 15) == 0) {
        // Analyser et exécuter la commande de sélection de données
    } else if (strncmp(commande, "METTRE A JOUR", 13) == 0) {
        // Analyser et exécuter la commande de mise à jour de données
    } else if (strncmp(commande, "SUPPRIMER DE", 12) == 0) {
        // Analyser et exécuter la commande de suppression de données
    } else {
        printf("Commande non reconnue : %s\n", commande);
    }
}
