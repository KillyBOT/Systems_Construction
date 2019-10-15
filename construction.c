#include "construction.h"

void showSwallowAddress(struct swallow s){
  printf("Address of struct: %p\n", &s);
  printf("Size of struct: %ld\n\n", sizeof(struct swallow));
}

void displaySwallow(struct swallow s){
  printf("Swallow species: %s.\n", s.species);
  printf("The airspeed velocity of the swallow is %d mph.\n\n", s.airspeedVelocity);
}

struct swallow changeSpecies(struct swallow s, char* newSpecies){
  struct swallow newS = s;
  newS.species = newSpecies;
  return newS;
}
