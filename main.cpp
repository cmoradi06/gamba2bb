#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <ostream>

int randNUMBER();
void condCARDS(int randY);
int jackCARDS = 0;

int main() {
  jackCARDS = 2000;
  srand (time(0));
  for (int iA = 1; iA < (20 + 1); iA++) {
    int randD;
    randD = randNUMBER();
    std::cout << "random number: ";
    std::cout << randD << " => ";
    condCARDS(randD);
    std::cout << std::endl;
  }

}
