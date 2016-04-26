#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if(argc != 2) {
    fprintf(stderr, "format: ./square <number>\n");
    exit(EXIT_FAILURE);
  }
  int nb = 0;
  sscanf(argv[1], "%d", &nb);
  if(!nb) {
    fprintf(stderr, "Enter a positive number\n");
    exit(0);
  }
  printf("%s * %s = %d\n", argv[1], argv[1], nb * nb);
  return 1;
}
