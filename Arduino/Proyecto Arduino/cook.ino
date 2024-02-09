#include "sushi.h"
#include "yakisoba.h"
#include "dorayaki.h"

void cook() { 

  
  int randomDish = random(1, 4); 

  switch (randomDish) {
    case 1:
      makeSushi(); 
      break;
    case 2:
      makeYakisoba(); 
      break;
    case 3:
      makeDorayaki(); 
      break;
  }
}
