#include <stdio.h>

int main() {
    // Variable pour stocker le choix de l'utilisateur dans le menu
    int choix;
    // Affichage du titre du programme
    printf("\n================================\n");
    printf("  TP1 - STRUCTURES CONDITIONNELLES\n");
    printf("================================\n");
    // Affichage du menu principal
    printf("Choisissez un exercice (1-10) :\n");
    printf("1. Nombre positif, negatif ou nul\n");
    printf("2. Calculatrice simple avec switch\n");
    printf("3. Annee bissextile\n");
    printf("4. Note et appreciation\n");
    printf("5. Parite d'un nombre\n");
    printf("6. Jour de la semaine avec switch\n");
    printf("7. Maximum de trois nombres\n");
    printf("8. Triangle valide\n");
    printf("9. Categorie d'age avec for\n");
    printf("10. Menu interactif avec boucle for\n");
    // Demande a l'utilisateur de saisir son choix
    printf("Votre choix : ");
    // Lecture du choix
    scanf("%d", &choix);
    // Structure switch pour rediriger vers l'exercice choisi
    switch(choix) {
        case 1:
            // Message d'identification de l'exercice 1
            printf("\n--- Exercice 1 : Nombre positif, negatif ou nul ---\n");
            // Declaration d'une variable entiere
            int n1;
            // Demande de saisie
            printf("Entrez un nombre entier : ");
            // Lecture du nombre
            scanf("%d", &n1);
            // Test si le nombre est positif
            if (n1 > 0) {
                // Affichage si positif
                printf("Le nombre est positif.\n");
            // Test si le nombre est negatif
            } else if (n1 < 0) {
                // Affichage si negatif
                printf("Le nombre est negatif.\n");
            // Sinon le nombre est nul
            } else {
                // Affichage si nul
                printf("Le nombre est nul.\n");
            }
            // Fin du cas 1
            break;

        case 2:
            // Message d'identification de l'exercice 2
            printf("\n--- Exercice 2 : Calculatrice simple avec switch ---\n");
            // Declaration des variables
            float a, b, resultat;
            // Variable pour le choix de l'operation
            int op;
            // Affichage du menu des operations
            printf("1. Addition (+)\n");
            printf("2. Soustraction (-)\n");
            printf("3. Multiplication (*)\n");
            printf("4. Division (/)\n");
            // Demande du choix
            printf("Choisissez une operation (1-4) : ");
            // Lecture du choix
            scanf("%d", &op);
            // Demande des deux nombres
            printf("Entrez deux nombres : ");
            // Lecture des deux nombres
            scanf("%f %f", &a, &b);
            // Switch selon l'operation choisie
            switch(op) {
                case 1:
                    // Calcul de l'addition
                    resultat = a + b;
                    // Affichage du resultat
                    printf("Resultat : %.2f\n", resultat);
                    // Fin du cas
                    break;
                case 2:
                    // Calcul de la soustraction
                    resultat = a - b;
                    // Affichage du resultat
                    printf("Resultat : %.2f\n", resultat);
                    // Fin du cas
                    break;
                case 3:
                    // Calcul de la multiplication
                    resultat = a * b;
                    // Affichage du resultat
                    printf("Resultat : %.2f\n", resultat);
                    // Fin du cas
                    break;
                case 4:
                    // Verification que le diviseur n'est pas zero
                    if (b != 0) {
                        // Calcul de la division
                        resultat = a / b;
                        // Affichage du resultat
                        printf("Resultat : %.2f\n", resultat);
                    } else {
                        // Message d'erreur division par zero
                        printf("Erreur : division par zero impossible.\n");
                    }
                    // Fin du cas
                    break;
                default:
                    // Message pour choix invalide
                    printf("Choix invalide.\n");
                    // Fin du cas
                    break;
            }
            // Fin du cas 2
            break;

        case 3:
            // Message d'identification de l'exercice 3
            printf("\n--- Exercice 3 : Annee bissextile ---\n");
            // Declaration de la variable annee
            int annee;
            // Demande de saisie
            printf("Entrez une annee : ");
            // Lecture de l'annee
            scanf("%d", &annee);
            // Test si annee bissextile : divisible par 4 et pas par 100 OU divisible par 400
            if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
                // Affichage si bissextile
                printf("%d est une annee bissextile.\n", annee);
            } else {
                // Affichage si non bissextile
                printf("%d n'est pas une annee bissextile.\n", annee);
            }
            // Fin du cas 3
            break;

        case 4:
            // Message d'identification de l'exercice 4
            printf("\n--- Exercice 4 : Note et appreciation ---\n");
            // Declaration de la note
            float note;
            // Demande de saisie
            printf("Entrez une note (0 a 20) : ");
            // Lecture de la note
            scanf("%f", &note);
            // Verification que la note est valide
            if (note < 0 || note > 20) {
                // Message d'erreur
                printf("Note invalide. Elle doit etre entre 0 et 20.\n");
            // Test du plus grand au plus petit
            } else if (note >= 16) {
                // Affichage Tres bien
                printf("Tres bien\n");
            } else if (note >= 14) {
                // Affichage Bien
                printf("Bien\n");
            } else if (note >= 12) {
                // Affichage Assez bien
                printf("Assez bien\n");
            } else if (note >= 10) {
                // Affichage Passable
                printf("Passable\n");
            } else {
                // Affichage Insuffisant
                printf("Insuffisant\n");
            }
            // Fin du cas 4
            break;

        case 5:
            // Message d'identification de l'exercice 5
            printf("\n--- Exercice 5 : Parite d'un nombre ---\n");
            // Declaration de la variable
            int n5;
            // Demande de saisie
            printf("Entrez un nombre entier : ");
            // Lecture du nombre
            scanf("%d", &n5);
            // Test si le nombre est pair avec modulo
            if (n5 % 2 == 0) {
                // Affichage si pair
                printf("Le nombre est pair.\n");
            } else {
                // Affichage si impair
                printf("Le nombre est impair.\n");
            }
            // Fin du cas 5
            break;

        case 6:
            // Message d'identification de l'exercice 6
            printf("\n--- Exercice 6 : Jour de la semaine avec switch ---\n");
            // Declaration de la variable jour
            int jour;
            // Demande de saisie
            printf("Entrez un nombre (1-7) : ");
            // Lecture du nombre
            scanf("%d", &jour);
            // Switch selon le jour
            switch(jour) {
                case 1:
                    // Affichage Lundi
                    printf("Lundi\n");
                    break;
                case 2:
                    // Affichage Mardi
                    printf("Mardi\n");
                    break;
                case 3:
                    // Affichage Mercredi
                    printf("Mercredi\n");
                    break;
                case 4:
                    // Affichage Jeudi
                    printf("Jeudi\n");
                    break;
                case 5:
                    // Affichage Vendredi
                    printf("Vendredi\n");
                    break;
                case 6:
                    // Affichage Samedi
                    printf("Samedi\n");
                    break;
                case 7:
                    // Affichage Dimanche
                    printf("Dimanche\n");
                    break;
                default:
                    // Message pour nombre invalide
                    printf("Nombre invalide. Entrez entre 1 et 7.\n");
                    break;
            }
            // Fin du cas 6
            break;

        case 7:
            // Message d'identification de l'exercice 7
            printf("\n--- Exercice 7 : Maximum de trois nombres ---\n");
            // Declaration de trois variables
            int x, y, z;
            // Demande de saisie
            printf("Entrez trois nombres entiers : ");
            // Lecture des trois nombres
            scanf("%d %d %d", &x, &y, &z);
            // Comparaison : si x est le plus grand
            if (x >= y && x >= z) {
                // Affichage x
                printf("Le maximum est : %d\n", x);
            // Sinon si y est le plus grand
            } else if (y >= x && y >= z) {
                // Affichage y
                printf("Le maximum est : %d\n", y);
            // Sinon z est le plus grand
            } else {
                // Affichage z
                printf("Le maximum est : %d\n", z);
            }
            // Fin du cas 7
            break;

        case 8:
            // Message d'identification de l'exercice 8
            printf("\n--- Exercice 8 : Triangle valide ---\n");
            // Declaration des trois cotes
            float c1, c2, c3;
            // Demande de saisie
            printf("Entrez les trois cotes du triangle : ");
            // Lecture des trois cotes
            scanf("%f %f %f", &c1, &c2, &c3);
            // Test des trois conditions du triangle
            if (c1 + c2 > c3 && c1 + c3 > c2 && c2 + c3 > c1) {
                // Affichage si triangle valide
                printf("Triangle valide.\n");
            } else {
                // Affichage si triangle invalide
                printf("Triangle non valide.\n");
            }
            // Fin du cas 8
            break;

        case 9:
            // Message d'identification de l'exercice 9
            printf("\n--- Exercice 9 : Categorie d'age avec for ---\n");
            // Boucle for obligatoire pour repeter 3 fois
            for (int i = 1; i <= 3; i++) {
                // Declaration de la variable age
                int age;
                // Affichage du numero de la personne
                printf("Personne %d - Entrez l'age : ", i);
                // Lecture de l'age
                scanf("%d", &age);
                // Test des categories
                if (age < 0) {
                    // Age invalide
                    printf("Age invalide.\n");
                } else if (age <= 12) {
                    // Categorie Enfant
                    printf("Enfant\n");
                } else if (age <= 17) {
                    // Categorie Adolescent
                    printf("Adolescent\n");
                } else if (age <= 64) {
                    // Categorie Adulte
                    printf("Adulte\n");
                } else {
                    // Categorie Senior
                    printf("Senior\n");
                }
            }
            // Fin du cas 9
            break;

        case 10:
            // Message d'identification de l'exercice 10
            printf("\n--- Exercice 10 : Menu interactif avec boucle for ---\n");
            // Boucle for obligatoire pour repeter le menu 3 fois
            for (int i = 1; i <= 3; i++) {
                // Variable pour le sous-choix
                int sousChoix;
                // Affichage du sous-menu
                printf("\n--- Sous-menu (%d/3) ---\n", i);
                printf("1. Afficher un message de bienvenue\n");
                printf("2. Calculer l'aire d'un rectangle\n");
                printf("3. Convertir Celsius en Fahrenheit\n");
                printf("4. Quitter\n");
                // Demande du choix
                printf("Votre choix : ");
                // Lecture du choix
                scanf("%d", &sousChoix);
                // Switch selon le sous-choix
                switch(sousChoix) {
                    case 1:
                        // Affichage du message de bienvenue
                        printf("Bienvenue dans le programme !\n");
                        break;
                    case 2:
                        // Declaration longueur et largeur
                        float longueur, largeur;
                        // Demande de saisie
                        printf("Entrez longueur et largeur : ");
                        // Lecture des valeurs
                        scanf("%f %f", &longueur, &largeur);
                        // Verification des valeurs
                        if (longueur > 0 && largeur > 0) {
                            // Calcul et affichage de l'aire
                            printf("Aire = %.2f\n", longueur * largeur);
                        } else {
                            // Message d'erreur
                            printf("Valeurs invalides.\n");
                        }
                        break;
                    case 3:
                        // Declaration de la temperature
                        float celsius, fahrenheit;
                        // Demande de saisie
                        printf("Entrez la temperature en Celsius : ");
                        // Lecture de la temperature
                        scanf("%f", &celsius);
                        // Conversion : F = C * 9/5 + 32
                        fahrenheit = celsius * 9.0 / 5.0 + 32;
                        // Affichage du resultat
                        printf("%.2f C = %.2f F\n", celsius, fahrenheit);
                        break;
                    case 4:
                        // Message de sortie
                        printf("Au revoir !\n");
                        break;
                    default:
                        // Message pour choix invalide
                        printf("Choix invalide.\n");
                        break;
                }
            }
            // Fin du cas 10
            break;

        default:
            // Message pour choix invalide dans le menu principal
            printf("Choix invalide. Veuillez entrer un nombre entre 1 et 10.\n");
            // Fin du cas default
            break;
    }
    // Message de fin de programme
    printf("\n----------------------------\n");
    printf("  FIN DU PROGRAMME - TP1\n");
    printf("----------------------------\n");
    // Fin du programme
    return 0;
}
