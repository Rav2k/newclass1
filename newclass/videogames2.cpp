#include <iostream>
#include "videogames2.h"
#include <cstring>

using namespace std;

videogames2::videogames2(){
  publisher = new char[20];
}

char* videogames2:: getPublisher(){
  return publisher;
}

double videogames2::getRating(){
  return rating;
}
