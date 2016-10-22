#include <iostream>

using namespace std;

class Media {
  private:
    char[] title;
    int year;
  
  public:
    char[] getTitle() { return title; }
    int getYear() { return year; }
};

class VideoGame: public Media {
  private:
    char[] publisher;
    int rating;
  
  public:
    char[] getPublisher() { return publisher; }
    int getRating() { return rating; }
};

class Music: public Media {
  private:
   char[] artist;
   int duration;
  
  public:
    char[] getArtist() { return artist; }
    int getDuration() { return duration; }
};

class Movie: public Media {
  private:
   char[] director;
   int duration;
   int rating;
  
  public:
    char[] getDirector() { return director; }
    int getDuration() { return duration; }
    int getRating() { return rating; }
};


int main() {
  
  cout << "Hello world!" << endl;
  
  return 0;
}