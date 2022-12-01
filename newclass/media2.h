#ifndef MEDIA
#define MEDIA
#include <iostream>
#include <cstring>


using namespace std;

class media2{
 public:
  virtual void printStuff();
  media2();
  char* gettitle();
  int getyear();
  int year;
  char* title;
};
#endif

