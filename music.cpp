#include "music.h"

#include <iostream>

using namespace std;

int main() {
  cout << "music.cpp — compilation successful!" << endl;
}

// Constructor
/*Music(char _title[10], int _year) {
  strcpy(title, _title);
  year = _year;
}

Music(char _title[10], int _year, char _artist[10], int _duration) {
  strcpy(title, _title);
  year = _year;
  strcpy(artist, _artist);
  duration = _duration;
}*/
    
// Accessors
void Music::getArtist(char* destArr) {
  for (int i = 0; i < sizeof(artist); i++) {
    destArr[i] = artist[i];
  }
}

int Music::getDuration() {
  return duration;
}

char Music::getType() { // classify by second letter in class
  return 'u';
}