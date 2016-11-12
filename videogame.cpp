#include "videogame.h"

#include <iostream>
#include <cstring>

using namespace std;

int main() {
  cout << "videogame.cpp — compilation successful!" << endl;
}

// Constructor
VideoGame::VideoGame() {
  fill(begin(publisher), end(publisher), '\0');
  rating = 0;
}

VideoGame::VideoGame(char _publisher[10], int _rating) {
  strcpy(publisher, _publisher);
  rating = _rating;
}

// Accessors
void VideoGame::getPublisher(char* destArr) {
  for (int i = 0; i < sizeof(publisher); i++) {
    destArr[i] = publisher[i];
  }
}

int VideoGame::getRating() {
  return rating;
}

char VideoGame::getType() { // classify by second letter in class
  return 'i';
}