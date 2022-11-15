#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <ostream>

int main();
int randNUMBER();
int jackCARDS;

void condCARDS(int randZ) {
  int randA;
  randA = randZ;
  if (randA <= 60) {
    jackCARDS += 25;
    std::cout << "you got back 25 jack cards" + ;
    }
    else 
      if (randA <= 85) {
        jackCARDS += 150;
        std::cout << "you got back 150 jack cards";
        }
        else if (randA <= 90) {
          jackCARDS += 200;
          std::cout << "you got back 200 jack cards";
          }
          else if (randA <= 94) {
            jackCARDS += 250;
            std::cout << "you got back 250 jack cards";
            }
            else if (randA <= 97) {
              jackCARDS += 500;
              std::cout << "you got back 5 king cards (500 jack cards)";
              }
              else if (randA <= 99) {
                jackCARDS += 1000;
                std::cout << "you got back 10 king cards (1000 jack cards)";
                }
                else {
                  jackCARDS += 2000;
                  std::cout << "you got back 20 king cards (2000 jack cards)";
                  }

}
