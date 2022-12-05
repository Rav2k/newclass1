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
void videogames2::printStuff(){
  cout<<title<<endl;
  cout<<year<<endl;
  cout<<publisher<<endl;
  cout<<rating<<endl;
}
