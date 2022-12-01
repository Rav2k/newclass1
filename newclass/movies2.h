#include <iostream>
#include "media2.h"
#include <cstring>

using namespace std;

class movies2: public media2{
 public:
  movies2();
  char* getDirector();
  double getRating();
  double getDuration();
  double rating;
  char* director;
  double duration;
  void printStuff();
};
