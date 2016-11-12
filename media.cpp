#include "media.h"

#include <iostream>
#include <cstring>

using namespace std;

// Constructor
Media::Media() {
  fill(begin(title), end(title), '\0');
  year = 0;
}

Media::Media(char _title[10], int _year) {
  strcpy(title, _title);
  year = _year;
}

int main() {
  cout << "media.cpp — compilation successful!" << endl;
}

// Accessors
void Media::getTitle(char* destArr) {
  for (int i = 0; i < sizeof(title); i++) {
    destArr[i] = title[i];
  }
}

int Media::getYear() {
  return year;
}

char Media::getType() { // classify by second letter in class
  return 'e';
}