#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
int main() {
  int fahr, celsius;

  fahr = LOWER;
  while (fahr <= UPPER) {
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + STEP;
  }
   return 0;
}
