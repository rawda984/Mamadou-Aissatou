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