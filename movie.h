#ifndef MOVIE_H
#define MOVIE_H

#include "media.h"

class Movie : public Media {
  private:
   char director[10];
   int duration;
   int rating;
  
  public:
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
    void getDirector(char* destArr);
    int getDuration();
    int getRating();
    char getType();
};

#endif