#include <iostream>
#include <vector>
#include "media.h"
#include "movie.h"
#include "music.h"
#include "videogame.h"

using namespace std;

int main() {
  vector<Media*> media;
  
  cout << "classes.cpp — compilation successful!" << endl;
  
  media.push_back(new Media("Title", 2000));
  
  return 0;
}
