#include <iostream>
#include "movies2.h"
#include <cstring>

using namespace std;

movies2::movies2(){
  director = new char[20];
}

char* movies2::getDirector(){
  return director;
}

double movies2::getRating(){
  return rating;
}

double movies2::getDuration(){
  return duration;
}

void movies2::printStuff(){
  cout<<title<<endl;
  cout<<director<<endl;
  cout<<year<<endl;
  cout<<duration<<endl;
  cout<<rating<<endl;
}
