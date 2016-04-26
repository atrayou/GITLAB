#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nbNames = 5, i = 0;
  char *nameList[] = {"MOUNIER Adrien", "MAX Jorgan", "CHAIZEMARTIN Vivian", "CHERRIER-VALENTIN Francois", "TRAN Eric"};
  
  printf("%d names to display:\n", nbNames);
  for(i = 0; i < nbNames; i++)
    printf("%s\n", nameList[i]);
  return EXIT_SUCCESS;
}
