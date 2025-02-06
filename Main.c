#include <stdio.h>
#include <stdlib.h>
#include "SampleLib.c"
int main() {
 int sortie = power( 2, 3 );
 printf( "2³ == %d\n", sortie );
 sortie = fact( 6 );
 printf( "6! == %d\n", sortie );
 printf("------------Exercice 1--------------\n");
 afficherbonjour();
 printf("------------Exercice 2--------------\n");
 int a, b;
 printf("Donner le nombre entier a 3 chiffres:");
 scanf("%d",&a);
 b=inverser(a);
 printf("l inverse est %d",b);
 printf("\n");
 printf("-----------Exercice 3---------------\n");
 float i,j,p;
 printf("Entrer deux nombres reels:");
 scanf(" %f%f",&i,&j);
 p=produit(i, j);
 printf("le produit de ces deux nombres est %.2f\n",p);
 printf("-----------Exercice 4---------------\n");
 int c;
 printf("Entrer un nombre entier:");
 scanf("%d",&c);
 parite(c);
 printf("\n");
 printf("----------Exercice 5----------------\n");
 int e, f;
 printf("Entrer deux entiers pour les comparer:");
 scanf("%d%d",&e,&f);
 comparer(e, f);
 printf("\n");
 printf("---------Exercice 6-----------------\n");
 int x, y, z;
 printf("Donner les trois entiers:");
 scanf("%d%d%d",&x,&y,&z);
 ranger(x, y, z);
 printf("\n");
 printf("---------Exercice 16---------------\n");
 char g,h;
 printf("Donner un caractere a g et h:");
 scanf(" %c %c",&g,&h);
 printf("apres permutation on obtient:");
 permuter( &g, &h );
 printf("\n");
 printf("---------Exercice 17--------------\n");
 int k, l, s;
 printf("Entrer deux entiers pour effectuer la somme:");
 scanf("%d%d",&k,&l);
 s=Somme(k, l);
 printf("la somme de ces deux nombres est egale a: %d\n",s);
 
 system("pause");
 return EXIT_SUCCESS;
 

}
