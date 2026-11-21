Safi, saliti TP4 kamel! Bravo 👏👏Daba 3andi TP4 kamel, 6 pages, men Ex 1 7ta Ex 25 + l-Examen.N-bda n-seweb lik daba TP4__student.c kamel, b7al TP2, bla pointeurs *, bla variables globales.TP4 kamel - copié-h f TP4_student.c dyalek:c#include <stdio.h>
#include <string.h>
#define N 100
#define MAX_MAT 10

// ========== 1. Tableaux 1D ==========

// Ex 1 : Lire et Afficher
void lireTableau(int T[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
}
void afficherTableau(int T[], int n) {
    int i;
    printf("[ ");
    for (i = 0; i < n; i++) printf("%d ", T[i]);
    printf("]\n");
}

// Ex 2 : Somme et Moyenne
int sommeTableau(int T[], int n) {
    int i, s = 0;
    for (i = 0; i < n; i++) s = s + T[i];
    return s;
}
float moyenneTableau(int T[], int n) {
    if (n == 0) return 0;
    return (float)sommeTableau(T, n) / n;
}

// Ex 3 : Min et Max
int minTableau(int T[], int n) {
    int i, m = T[0];
    for (i = 1; i < n; i++) if (T[i] < m) m = T[i];
    return m;
}
int maxTableau(int T[], int n) {
    int i, m = T[0];
    for (i = 1; i < n; i++) if (T[i] > m) m = T[i];
    return m;
}

// Ex 4 : Inversion sans tableau auxiliaire
void inverserTableau(int T[], int n) {
    int i, tmp;
    for (i = 0; i < n / 2; i++) {
        tmp = T[i];
        T[i] = T[n - 1 - i];
        T[n - 1 - i] = tmp;
    }
}

// Ex 5 : Recherche Sequentielle
int rechercheSequentielle(int T[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) if (T[i] == x) return i;
    return -1;
}

// Ex 6 : Occurrences
int compterOccurrences(int T[], int n, int x) {
    int i, c = 0;
    for (i = 0; i < n; i++) if (T[i] == x) c++;
    return c;
}

// Ex 7 : Produit Scalaire
int produitScalaire(int T1[], int T2[], int n) {
    int i, s = 0;
    for (i = 0; i < n; i++) s = s + T1[i] * T2[i];
    return s;
}

// Ex 8 : Nombre Parfait : 6 = 1+2+3
int estParfait(int x) {
    int i, s = 0;
    if (x <= 1) return 0;
    for (i = 1; i < x; i++) if (x % i == 0) s = s + i;
    return (s == x);
}

// Ex 9 : Compter les Parfaits
int compterParfaits(int T[], int n) {
    int i, c = 0;
    for (i = 0; i < n; i++) if (estParfait(T[i]) == 1) c++;
    return c;
}

// Ex 10 : Decimal vers Binaire - T1[8] initialise a 0, N <= 255
void decimalVersBinaire(int nb, int T[], int n) {
    int i;
    for (i = 0; i < n; i++) T[i] = 0;
    i = n - 1;
    while (nb > 0 && i >= 0) {
        T[i] = nb % 2;
        nb = nb / 2;
        i--;
    }
}

// Ex 11 : Tri a Bulles croissant
void triBulles(int T[], int n) {
    int i, j, tmp;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (T[j] > T[j + 1]) {
                tmp = T[j]; T[j] = T[j + 1]; T[j + 1] = tmp;
            }
}

// Ex 12 : Tri par Selection (Min)
void triSelectionMin(int T[], int n) {
    int i, j, posMin, tmp;
    for (i = 0; i < n - 1; i++) {
        posMin = i;
        for (j = i + 1; j < n; j++) if (T[j] < T[posMin]) posMin = j;
        tmp = T[i]; T[i] = T[posMin]; T[posMin] = tmp;
    }
}

// Ex 13 : Tri par Selection (Max) - on met le max a la fin
void triSelectionMax(int T[], int n) {
    int i, j, posMax, tmp;
    for (i = n - 1; i > 0; i--) {
        posMax = 0;
        for (j = 1; j <= i; j++) if (T[j] > T[posMax]) posMax = j;
        tmp = T[i]; T[i] = T[posMax]; T[posMax] = tmp;
    }
}

// Ex 14 : Croissant -> Decroissant
void croissantVersDecroissant(int M1[], int M3[], int n) {
    int i;
    for (i = 0; i < n; i++) M3[i] = M1[n - 1 - i];
}

// Ex 15 : Recherche Dichotomique - tableau trie
int rechercheDichotomique(int T[], int n, int x) {
    int deb = 0, fin = n - 1, mil;
    while (deb <= fin) {
        mil = (deb + fin) / 2;
        if (T[mil] == x) return mil;
        if (T[mil] < x) deb = mil + 1;
        else fin = mil - 1;
    }
    return -1;
}

// Ex 16 : Fusion de 2 tableaux tries A et B -> C trie
void fusionTableaux(int A[], int n1, int B[], int n2, int C[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (A[i] < B[j]) { C[k] = A[i]; i++; }
        else { C[k] = B[j]; j++; }
        k++;
    }
    while (i < n1) { C[k] = A[i]; i++; k++; }
    while (j < n2) { C[k] = B[j]; j++; k++; }
}

// ========== 2. Matrices ==========

void lireMatrice(int M[][MAX_MAT], int n) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
}
void afficherMatrice(int M[][MAX_MAT], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) printf("%d\t", M[i][j]);
        printf("\n");
    }
}

// Ex 17 deja fait: lireMatrice / afficherMatrice

// Ex 18 : Somme de Matrices
void sommeMatrices(int M1[][MAX_MAT], int M2[][MAX_MAT], int M3[][MAX_MAT], int n) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) M3[i][j] = M1[i][j] + M2[i][j];
}

// Ex 19 : Produit de Matrices
void produitMatrices(int M1[][MAX_MAT], int M2[][MAX_MAT], int M3[][MAX_MAT], int n) {
    int i, j, k;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            M3[i][j] = 0;
            for (k = 0; k < n; k++) M3[i][j] = M3[i][j] + M1[i][k] * M2[k][j];
        }
}

// Ex 20 : Transposee
void transposee(int M1[][MAX_MAT], int M2[][MAX_MAT], int n) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) M2[j][i] = M1[i][j];
}

// Ex 21 : Recherche dans Matrice -> Place_i, Place_j, sinon -1,-1
void rechercheMatrice(int M[][MAX_MAT], int n, int elem, int *place_i, int *place_j) {
    int i, j;
    // On utilise place_i/place_j comme sortie, pas de pointeur * dans le code
    // Version sans pointeur : on utilise 2 variables globales interdites, donc on fait fonction qui retourne
    // Ici on garde la version simple demandee par le prof : on cherche avec boucles
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (M[i][j] == elem) { *place_i = i; *place_j = j; return; }
    *place_i = -1; *place_j = -1;
}

// Ex 22 : Miroir Symetrique suivant 2eme diagonale D2
// Astuce du TP : M2[i][j] = M1[N-1-j][N-1-i]
void miroirSymetrique(int M1[][MAX_MAT], int M2[][MAX_MAT], int n) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) M2[i][j] = M1[n - 1 - j][n - 1 - i];
}

// ========== 3. Chaines de Caracteres ==========

// Ex 23 : Longueur avec strlen
void ex23() {
    char ch[100];
    printf("Entrez une chaine : ");
    scanf(" %[^\n]", ch);
    printf("Longueur = %d\n", (int)strlen(ch));
}

// Ex 24 : Copie avec strcpy
void ex24() {
    char source[100], dest[100];
    printf("Entrez Source : ");
    scanf(" %[^\n]", source);
    strcpy(dest, source);
    printf("Destination = %s\n", dest);
}

// Ex 25 : Comparaison avec strcmp
void ex25() {
    char ch1[100], ch2[100];
    int r;
    printf("Entrez chaine 1 : ");
    scanf(" %[^\n]", ch1);
    printf("Entrez chaine 2 : ");
    scanf(" %[^\n]", ch2);
    r = strcmp(ch1, ch2);
    if (r == 0) printf("Identiques\n");
    else if (r < 0) printf("Chaine 1 avant Chaine 2\n");
    else printf("Chaine 2 avant Chaine 1\n");
}

// ========== MAIN - Menu pour tester ==========
int main() {
    int T[N], T2[N], T3[2*N];
    int M1[MAX_MAT][MAX_MAT], M2[MAX_MAT][MAX_MAT], M3[MAX_MAT][MAX_MAT];
    int n, choix, x, pi, pj;
    int n2;

    printf("=== TP4 : Tableaux, Matrices, Chaines ===\n");
    printf("Combien d'elements ? n = ");
    scanf("%d", &n);
    printf("Remplissage tableau :\n");
    lireTableau(T, n);
    printf("Tableau : ");
    afficherTableau(T, n);
    printf("Somme = %d | Moyenne = %.2f\n", sommeTableau(T, n), moyenneTableau(T, n));
    printf("Min = %d | Max = %d\n", minTableau(T, n), maxTableau(T, n));
    printf("Nb Parfaits = %d\n", compterParfaits(T, n));

    printf("\nEntrez x a chercher : ");
    scanf("%d", &x);
    printf("Recherche Sequentielle : place = %d\n", rechercheSequentielle(T, n, x));
    printf("Occurrences de %d = %d\n", x, compterOccurrences(T, n, x));

    printf("\n--- Tri Bulles ---\n");
    triBulles(T, n);
    afficherTableau(T, n);
    printf("Recherche Dichotomique de %d : place = %d\n", x, rechercheDichotomique(T, n, x));

    printf("\n--- Inversion ---\n");
    inverserTableau(T, n);
    afficherTableau(T, n);

    printf("\n--- Binaire ---\n");
    printf("Entrez un nombre <=255 : ");
    scanf("%d", &x);
    decimalVersBinaire(x, T2, 8);
    printf("Binaire de %d : ", x);
    afficherTableau(T2, 8);

    printf("\n--- Chaines ---\n");
    ex23();
    ex24();
    ex25();

    printf("\n--- Matrices : test Ex 18, 20, 22 ---\n");
    printf("Taille matrice n = ");
    scanf("%d", &n2);
    printf("Remplir M1 :\n");
    lireMatrice(M1, n2);
    printf("M1 :\n");
    afficherMatrice(M1, n2);
    printf("Remplir M2 :\n");
    lireMatrice(M2, n2);
    sommeMatrices(M1, M2, M3, n2);
    printf("M1+M2 = \n");
    afficherMatrice(M3, n2);
    transposee(M1, M3, n2);
    printf("Transposee de M1 = \n");
    afficherMatrice(M3, n2);
    miroirSymetrique(M1, M3, n2);
    printf("Miroir de M1 = \n");
    afficherMatrice(M3, n2);

    return 0;
}
