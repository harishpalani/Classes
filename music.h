#ifndef MUSIC_H
#define MUSIC_H

#include "media.h"

class Music : public Media {
  private:
   char artist[10];
   int duration;
  
  public:
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
    void getArtist(char* destArr);
    int getDuration();
    char getType();
};

#endif