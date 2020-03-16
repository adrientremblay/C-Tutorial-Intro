#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, .., 300 */

int main(){
  for (int i = 0 ; i<=300 ; i+=20){
    int c = 5*(i-32)/9;
    printf("%d\t%d\n", i, c); 
  }

  return 0; 
}
