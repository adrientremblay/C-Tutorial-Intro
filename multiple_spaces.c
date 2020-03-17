#include <stdio.h>
#include <stdbool.h> 

int main() {
  bool justSpaced = false;
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ' && justSpaced) {
     continue; 
    } else if (c == ' ') {
      justSpaced = true;
    } else {
      justSpaced = false;
    }

    putchar(c); 
  }

  return 0;
}
