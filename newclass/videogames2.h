#include <iostream>
#include "media2.h"
#include <cstring>

using namespace std;

class videogames2: public media2{
 public:
  videogames2();
  char* getPublisher();
  double getRating();
  double rating;
  char* publisher;
  void printStuff();
};

