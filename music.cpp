#include "music.h"

#include <iostream>

using namespace std;

int main() {
  cout << "music.cpp — compilation successful!" << endl;
}

// Constructor
Music::Music(char* _publisher, char* _artist, char* _title, char* _year, char* _duration):Media() {
  publisher = new char[24];
  artist = new char[24];
  duration = new char[10];
  strcpy(publisher, _publisher);
  strcpy(artist, _artist);
  strcpy(duration, _duration);
  strcpy(title, _title);
  strcpy(year, _year);
  id = 2;
}

// Deconstructor
Music::~Music() {
  delete [] publisher;
  delete [] artist;
  delete [] duration;
}
    
// Accessors
char* Music::getPublisher(){
  return publisher;
}

char* Music::getArtist(){
  return artist;
}

char* Music::getDuration(){
  return duration;
}

void Music::printInfo(){
  cout << "MUSIC |" << " / Title: " << title << " / Year: " << year << " / Artist: " << artist << " / Publisher: " << publisher << " / Duration: " << duration << endl;
}