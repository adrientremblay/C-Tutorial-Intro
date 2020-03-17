#include <stdio.h>
#include <stdbool.h>

int main() {
  int c, wc; 
  wc = 0;
  bool word = false;

  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      if (word == false) {
        wc++;
        word = true;
      }  
    } else {
      word = false;
    } 
  }

  printf("%d\n", wc);
  return 0;
}
