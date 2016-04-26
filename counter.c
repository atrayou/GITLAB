#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if(argc != 2) {
    fprintf(stderr, "format: ./counter <number>\n");
    exit(EXIT_FAILURE);
  }
  int nb = 0, i = 1;
  sscanf(argv[1], "%d", &nb);
  if(nb <= 0) {
    fprintf(stderr, "Enter a positive number\n");
    exit(EXIT_FAILURE);
  }
  for(i = 1; i <= nb; i++)
    printf("%d ", i);
  printf("\n");
  return EXIT_SUCCESS;
}
