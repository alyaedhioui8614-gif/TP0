#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    int choix;
    printf("\n================================\n");
    printf("   TP2 - STRUCTURES ITERATIVES\n");
    printf("================================\n");
    printf("Choisissez un exercice (1-20) :\n");
    printf("--- BOUCLES FOR (Exercices 1-5) ---\n");
    printf("1. Table de multiplication\n");
    printf("2. Somme des N premiers entiers\n");
    printf("3. Factorielle d'un nombre\n");
    printf("4. Pyramide d'etoiles\n");
    printf("5. Inverse d'un nombre\n");
    printf("--- BOUCLES WHILE (Exercices 6-10) ---\n");
    printf("6. Validation d'entree utilisateur\n");
    printf("7. Somme avec valeur sentinelle\n");
    printf("8. Compteur de chiffres\n");
    printf("9. Menu interactif avec while\n");
    printf("10. Jeu devineur basique\n");
    printf("--- BOUCLES DO...WHILE (Exercices 11-15) ---\n");
    printf("11. Menu principal avec do...while\n");
    printf("12. Retry logic (recommencer ou non)\n");
    printf("13. Nombre premier\n");
    printf("14. Affichage piedestal avec do...while\n");
    printf("15. Devinez avec limite de tentatives\n");
    printf("--- BOUCLES AVANCEES (Exercices 16-20) ---\n");
    printf("16. Plus grand commun diviseur (PGCD)\n");
    printf("17. Moyenne ponderee\n");
    printf("18. Triangle de Pascal\n");
    printf("19. Tracker de budget journalier\n");
    printf("20. Compteur progressif\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    switch(choix) {
        case 1: {
            printf("\n--- Exercice 1 : Table de Multiplication ---\n");
            int nombre, i;
            printf("Entrez un nombre : ");
            scanf("%d", &nombre);
            for (i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", nombre, i, nombre * i);
            }
            break;
        }
        case 2: {
            printf("\n--- Exercice 2 : Somme des N premiers entiers ---\n");
            int N, i, somme = 0;
            printf("Entrez N : ");
            scanf("%d", &N);
            for (i = 1; i <= N; i++) {
                somme = somme + i;
            }
            printf("Somme = %d\n", somme);
            break;
        }
        case 3: {
            printf("\n--- Exercice 3 : Factorielle ---\n");
            int N, i;
            long long factorielle = 1;
            printf("Entrez N (0-20) : ");
            scanf("%d", &N);
            if (N < 0 || N > 20) {
                printf("Erreur : N doit etre entre 0 et 20\n");
            } else {
                for (i = 1; i <= N; i++) {
                    factorielle = factorielle * i;
                }
                printf("%d! = %lld\n", N, factorielle);
            }
            break;
        }
        case 4: {
            printf("\n--- Exercice 4 : Pyramide d'etoiles ---\n");
            int N, i, j;
            printf("Entrez nombre de lignes N : ");
            scanf("%d", &N);
            for (i = 1; i <= N; i++) {
                for (j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }
            break;
        }
        case 5: {
            printf("\n--- Exercice 5 : Inverse d'un nombre ---\n");
            int nombre, temp, chiffre, inverse = 0;
            printf("Entrez un nombre positif : ");
            scanf("%d", &nombre);
            temp = nombre;
            for (; temp > 0; temp = temp / 10) {
                chiffre = temp % 10;
                inverse = inverse * 10 + chiffre;
            }
            printf("Inverse de %d = %d\n", nombre, inverse);
            break;
        }
        case 6: {
            printf("\n--- Exercice 6 : Validation d'entree ---\n");
            int nombre;
            printf("Entrez un nombre entre 1 et 100 : ");
            scanf("%d", &nombre);
            while (nombre < 1 || nombre > 100) {
                printf("Erreur ! Entrez un nombre entre 1 et 100 : ");
                scanf("%d", &nombre);
            }
            printf("Nombre valide : %d\n", nombre);
            break;
        }
        case 7: {
            printf("\n--- Exercice 7 : Somme avec sentinelle ---\n");
            int nombre, somme = 0;
            printf("Entrez des nombres (0 pour arreter) : ");
            scanf("%d", &nombre);
            while (nombre != 0) {
                somme = somme + nombre;
                printf("Entrez un nombre (0 pour arreter) : ");
                scanf("%d", &nombre);
            }
            printf("Somme = %d\n", somme);
            break;
        }
        case 8: {
            printf("\n--- Exercice 8 : Compteur de chiffres ---\n");
            int nombre, temp, compteur = 0;
            printf("Entrez un nombre positif : ");
            scanf("%d", &nombre);
            temp = nombre;
            if (temp == 0) compteur = 1;
            while (temp > 0) {
                temp = temp / 10;
                compteur++;
            }
            printf("Ce nombre a %d chiffres\n", compteur);
            break;
        }
        case 9: {
            printf("\n--- Exercice 9 : Menu interactif ---\n");
            int continuer = 1, c, n;
            while (continuer == 1) {
                printf("\n1. Carre d'un nombre\n2. Racine carree\n3. Quitter\nVotre choix : ");
                scanf("%d", &c);
                switch(c) {
                    case 1: printf("Entrez n : "); scanf("%d",&n); printf("Carre = %d\n", n*n); break;
                    case 2: printf("Entrez n : "); scanf("%d",&n); printf("Racine = %.2f\n", sqrt(n)); break;
                    case 3: continuer = 0; printf("Au revoir !\n"); break;
                    default: printf("Choix invalide\n");
                }
            }
            break;
        }
        case 10: {
            printf("\n--- Exercice 10 : Jeu devineur ---\n");
            int secret, essai, trouve = 0, tentatives = 0;
            srand(time(NULL));
            secret = 1 + (rand() % 100);
            printf("Devinez le nombre entre 1 et 100 :\n");
            while (trouve == 0) {
                printf("Votre essai : ");
                scanf("%d", &essai);
                tentatives++;
                if (essai == secret) { printf("Correct ! en %d tentatives\n", tentatives); trouve = 1; }
                else if (essai < secret) printf("Trop bas\n");
                else printf("Trop haut\n");
            }
            break;
        }
        case 11: {
            printf("\n--- Exercice 11 : Calculatrice ---\n");
            int c; float a, b;
            do {
                printf("\n1.+  2.-  3.*  4./  5.Quitter\nChoix : ");
                scanf("%d", &c);
                if (c >= 1 && c <= 4) {
                    printf("Entrez 2 nombres : "); scanf("%f %f", &a, &b);
                    if (c==1) printf("Resultat = %.2f\n", a+b);
                    if (c==2) printf("Resultat = %.2f\n", a-b);
                    if (c==3) printf("Resultat = %.2f\n", a*b);
                    if (c==4) { if(b!=0) printf("Resultat = %.2f\n", a/b); else printf("Division par zero !\n"); }
                }
            } while (c != 5);
            break;
        }
        case 12: {
            printf("\n--- Exercice 12 : Retry logic ---\n");
            int a, b, continuer;
            do {
                printf("Entrez 2 nombres : "); scanf("%d %d", &a, &b);
                printf("Produit = %d\n", a*b);
                printf("Voulez-vous un autre produit ? (1=Oui, 0=Non) : ");
                scanf("%d", &continuer);
            } while (continuer == 1);
            break;
        }
        case 13: {
            printf("\n--- Exercice 13 : Nombre premier ---\n");
            int n, i, premier = 1;
            do { printf("Entrez un nombre >= 1 : "); scanf("%d", &n); } while (n < 1);
            if (n == 1) premier = 0;
            for (i = 2; i <= n-1; i++) { if (n % i == 0) premier = 0; }
            if (premier) printf("%d est premier\n", n);
            else printf("%d n'est pas premier\n", n);
            break;
        }
        case 14: {
            printf("\n--- Exercice 14 : Piedestal ---\n");
            int N, i, j;
            do { printf("Entrez N (1-10) : "); scanf("%d", &N); } while (N < 1 || N > 10);
            i = 1;
            do {
                j = 1;
                do { printf("*"); j++; } while (j <= i);
                printf("\n"); i++;
            } while (i <= N);
            break;
        }
        case 15: {
            printf("\n--- Exercice 15 : Devinez avec limite ---\n");
            int secret = 42, essai, t = 0, gagne = 0;
            do {
                printf("Essai %d/5 : ", t+1); scanf("%d", &essai); t++;
                if (essai == secret) { printf("Bravo !\n"); gagne = 1; }
                else if (essai < secret) printf("Trop bas\n");
                else printf("Trop haut\n");
            } while (t < 5 && gagne == 0);
            if (!gagne) printf("Perdu ! C'etait %d\n", secret);
            break;
        }
        case 16: {
            printf("\n--- Exercice 16 : PGCD ---\n");
            int a, b, r;
            printf("Entrez 2 nombres : "); scanf("%d %d", &a, &b);
            while (b != 0) { r = a % b; a = b; b = r; }
            printf("PGCD = %d\n", a);
            break;
        }
        case 17: {
            printf("\n--- Exercice 17 : Moyenne ponderee ---\n");
            int nb, i; float note, coeff, s = 0, sc = 0;
            printf("Combien de notes ? "); scanf("%d", &nb);
            for (i = 1; i <= nb; i++) {
                printf("Note %d et coeff : ", i); scanf("%f %f", &note, &coeff);
                s = s + note * coeff; sc = sc + coeff;
            }
            if (sc != 0) printf("Moyenne = %.2f\n", s/sc);
            break;
        }
        case 18: {
            printf("\n--- Exercice 18 : Triangle de Pascal ---\n");
            int N, i, j, c;
            printf("Entrez N : "); scanf("%d", &N);
            for (i = 0; i < N; i++) {
                c = 1;
                for (j = 0; j <= i; j++) {
                    printf("%d ", c);
                    c = c * (i - j) / (j + 1);
                }
                printf("\n");
            }
            break;
        }
        case 19: {
            printf("\n--- Exercice 19 : Tracker budget ---\n");
            float depense, total = 0; int jour = 1;
            printf("Entrez depenses par jour (-1 pour arreter)\n");
            printf("Jour 1 : "); scanf("%f", &depense);
            while (depense != -1) {
                total = total + depense; jour++;
                printf("Jour %d : ", jour); scanf("%f", &depense);
            }
            printf("Total = %.2f, Moyenne = %.2f\n", total, total/(jour-1));
            break;
        }
        case 20: {
            printf("\n--- Exercice 20 : Compteur progressif ---\n");
            int i, n, total = 0;
            printf("Entrez N : "); scanf("%d", &n);
            for (i = 1; i <= n; i++) {
                total = total + i;
                printf("Etape %d : total = %d\n", i, total);
            }
            break;
        }
        default:
            printf("Choix invalide. Veuillez entrer un nombre entre 1 et 20.\n");
    }
    printf("\n================================\n");
    printf("   FIN DU PROGRAMME - TP2\n");
    printf("================================\n");
    return 0;
}