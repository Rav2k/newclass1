#include <iostream>
#include "music2.h"
#include <cstring>

using namespace std;

music2::music2(){
  publisher = new char[20];
  artist  = new char[20];
}

char* music2::getpublisher(){
  return publisher;
}

char* music2::getartist(){
  return artist;
}

double music2::getduration(){
  return duration;
}

void music2::printStuff(){
  cout<<title<<endl;
  cout<<artist<<endl;
  cout<<year<<endl;
  cout<<duration<<endl;
  cout<<publisher<<endl;
}
