#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include "media.h"

class VideoGame : public Media {
  private:
    char publisher[10];
    int rating;
  
  public:
    // Constructor
    VideoGame();
    // VideoGame(char _title[10], int _year, char _publisher[10], int _rating);
    VideoGame(char _publisher[10], int _rating);
    
    // Accessors
    void getPublisher(char* destArr);
    int getRating();
    char getType();
};

#endif