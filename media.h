#ifndef MEDIA_H
#define MEDIA_H

class Media {
  protected:
    char title[10];
    int year;
    
  public:
    // Constructor
    Media();
    Media(char _title[10], int _year);
    
    // Accessors
    void getTitle(char* destArr);
    int getYear();
    char getType();
};

#endif