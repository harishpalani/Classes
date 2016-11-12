#include "movie.h"

#include <iostream>

using namespace std;

int main() {
  cout << "movie.cpp — compilation successful!" << endl;
}

// Constructor
/*Movie(char _title[10], int _year) {
  strcpy(title, _title);
  year = _year;
}

Movie(char _title[10], int _year, char _director[10], int _duration, int _rating) {
  strcpy(title, _title);
  year = _year;
  strcpy(director, _director);
  duration = _duration;
  rating = _rating;
}*/
    
// Accessors
void Movie::getDirector(char* destArr) { 
  for (int i = 0; i < sizeof(director); i++) {
    destArr[i] = director[i];
  }
}

int Movie::getDuration() {
  return duration;
}

int Movie::getRating() {
  return rating;
}

char Movie::getType() { // classify by second letter in class
  return 'o';
}