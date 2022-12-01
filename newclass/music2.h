#include <iostream>
#include "media2.h"
#include <cstring>

using namespace std;

class music2: public media2{
 public:
  music2();
  char* getpublisher();
  char* getartist();
  double getduration();
  double duration;
  char *publisher;
  char *artist;
  void printStuff();
};
