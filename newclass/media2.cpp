#include <iostream>
#include "media2.h"

using namespace std;

media2::media2(){
  title = new char[20];
}

char* media2::gettitle(){
  return title;
}

int media2::getyear(){
  return year;
}

void media2::printStuff(){
  
}
