#include "SampleLib.h"
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
 unsigned int result = 1;
 while ( value > 1 ) {
 result *= value;
 value --;
 }
 return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
 if ( pow == 0 ) return 1;
 if ( pow == 1 ) return value
 }
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow );
// Définition d'une fonction qui affiche bonjour(Exercice 1)
void direbonjour();
// Définition d'une fonction qui donne l'inverse d'un nombre entier à 3 chiffres(Exercice 2)
int inverse(int x);
// Définition d'une fonction de calcul de produit de deux reéls(Exercice 3)
float produit(float a, float b);
// Définition d'une fonction qui donne la parité d'un entier(Exercice 4)
void parite(int x);
// Définition d'une fonction qui compare deux entiers(Exercice 5)
void comparaison(int a, int b);
//definition d'une fonction qui classe trois nombres entiers par ordre croissant(Exercice 6)
void classement(int a, int b, int c);
// Définition d'une fonction de permutation du contenu de deux variables de type char en utilisant les pointeurs(Exercice 16)
void permutation(char *v, char *w);
// Définition d'une fonction qui renvoie la somme de deux entiers(Exercice 17)
int Somme(int a, int b);
#endif
