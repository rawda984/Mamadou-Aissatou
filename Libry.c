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
 if ( pow == 1 ) return value;
 int accumulator = 1;
 while( pow > 0 ) {
 accumulator *= value;
 pow--;
 }
 return accumulator;
}
// Definition d'une fonction qui affiche bonjour:exercice 1
void afficherbonjour(){
	printf("bonjour\n");
}
//Definition d'une fonction qui donne l'inverse d'un nombre entier à 3 chiffres:exercice 2
int inverser(int n){
int i, c, d, u ;
    if(n >= 100 && n<= 999){
        c = n/100;
        d = (n/10)%10;
        u = n%10;
        i = u*100 + d*10 + c;
	}
    return i;
}
//Définition d'une fonction de calcul de produit de deux reels: exercice 3
float produit(float a, float b){
	float p;
	p=a*b;
	return p;
}
//Definition d'une fonction qui donne la parité d'un entier:exercice 4
void parite(int x){
	if(x%2==0)
	printf("le nombre entre est paire");
	else 
	printf("le nombre entre est impaire");
}
// Definition d'une fonction qui compare deux entiers:Exercice 5
void comparer(int c, int d){
	if(c==d)
	printf("la comparaison est :%d=%d",c,d);
	else if(c<d)
	printf("la comparaison est :%d<%d",c,d);
	else
	printf("la comparaison est :%d>%d",c,d);
}
//Definition d'une fonction qui classe trois nombres entiers :exercice 6
void ranger(int x, int y, int z){
	if(x<y && y<z)
	printf("%d<%d<%d", x,y,z);
	else if(y<x && x<z)
	printf("%d<%d<%d", y,x,z);
	else if(z<x && x<y)
	printf("%d<%d<%d", z,x,y);
	else if(y<z && z<x)
	printf("%d<%d<%d", y,z,x);
	else if(z<y && y<x)
	printf("%d<%d<%d", z,y,x);
	else
	printf("%d<%d<%d", x,z,y);
}
//Definition d'une fonction de permutation du contenu de deux caracteres:Exercice 16
void permuter(char *n, char *m){
char t = *n;
*n = *m;
*m = t;
printf("n= %c , m= %c\n", *n, *m);
}
//Definition d'une fonction qui renvoie la somme de deux entiers:Exercice 17
int Somme(int a, int b){
	int somme;
	somme=a+b;
	return somme;
}

