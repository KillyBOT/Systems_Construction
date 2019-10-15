#include "construction.h"

int main(){
  struct swallow testSwallow;
  testSwallow.species = "African";
  testSwallow.airspeedVelocity = 10;

  showSwallowAddress(testSwallow);
  displaySwallow(testSwallow);
  testSwallow = changeSpecies(testSwallow, "European");
  printf("Changed species to European.\n");
  displaySwallow(testSwallow);
}
