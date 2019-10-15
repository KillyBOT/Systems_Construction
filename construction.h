#include <stdio.h>
#include <stdlib.h>

struct swallow {
  int airspeedVelocity;
  char* species;
};

void showSwallowAddress(struct swallow s);
void displaySwallow(struct swallow s);
struct swallow changeSpecies(struct swallow s, char* newSpecies);
