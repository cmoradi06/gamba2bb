#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <ostream>

int main();
void condCARDS(int randY);
int jackCARDS;

int randNUMBER() {
  int randN;
  randN = rand() % 100 + 1;
  return randN;

}
