#include <iostream>
#include <vector>
#include <cstring>

#include "media.h"
#include "movie.h"
#include "music.h"
#include "videogame.h"

using namespace std;

void add(vector<Media*>* db);
void search(vector<Media*> db);
void del(vector<Media*> db);

int main() {
  vector<Media*> db;
  vector<Media*>* dbPtr = &db;
  char input;
  
  while(input != 'q'){
    cout << "\nWould you like to (1) add, (2) search, (3) delete, or (q) quit?" << endl;
    cin >> input;
    cin.ignore();
    
    if (input == '1') {
      add(dbPtr);
    } else if (input == '2') {
      search(db);
    } else if (input == '3') {
      del(db);
    } else {
      return 0;
    }
  }
}

// Functions
void add(vector<Media*>* db) {
  char title[42];
  char year[5];
  int input;
  
  cout << "What's the title?" << endl;
  cin.getline(title, 42);

  for (int i = 0; i < strlen(title); i++) {
    title[i] = toupper(title[i]);
  }
  
  cout << "What year was it released in?" << endl;
  cin.getline(year, 5);
  
  cout << "Is it: (1) a video game, (2) music, or (3) a movie?" << endl;
  cin >> input;
  cin.ignore();
  
  if (input == 1) {
    char rating[24];
    char publisher[24];
    
    cout << "What's the rating?" << endl;
    cin.getline(rating, 24);
    cout << "Who's the publisher?" << endl;
    cin.getline(publisher, 24);
    
    VideoGame* videogame = new VideoGame(publisher, rating, title, year);
    db -> push_back(videogame);
    
    cout << "\n" << title << " successfully added to the database." << endl;
  } else if (input == 2) {
    char publisher[24];
    char artist[24];
    char duration[10];
    
    cout << "Who's the publisher?" << endl;
    cin.getline(publisher, 24);
    cout << "Who's the artist?" << endl;
    cin.getline(artist, 24);
    cout << "What's the duration?" << endl;
    cin.getline(duration, 10);
    
    Music* music = new Music(publisher, artist, title, year, duration);
    db -> push_back(music);
    
    cout << "\n" << title << " successfully added to the database." << endl;
  } else if (input == 3) {
    char director[24];
    char duration[10];
    char rating[24];
    
    cout << "Who's the director?" << endl;
    cin.getline(director, 24);
    cout << "What's the duration?" << endl;
    cin.getline(duration, 10);
    cout << "What's the rating?" << endl;
    cin.getline(rating, 24);
    
    Movie* movie = new Movie(director, duration, rating, year, title);
    db -> push_back(movie);
    
    cout << "\n" << title << " successfully added to the database." << endl;
  }
}

void search(vector<Media*> db) {
  int input;
  
  cout << "Would you like to search by (1) title or (2) year?" << endl;
  cin >> input;
  cin.ignore();
  
  if (input == 1) {
    char title[42];
    
    cout << "What's the title?" << endl;
    cin.getline(title, 42);

    for (int i = 0; i < strlen(title); i++) {
      title[i] = toupper(title[i]);
    }

    cout << "\nHere are your results: " << endl;
    
    for (int i = 0; i < db.size(); i++) {
      if (strcmp(title, db[i] -> getTitle()) == 0) {
        if (db[i] -> getID() == 1) {
          ((VideoGame*) db[i]) -> printInfo();
        } else if(db[i] -> getID() == 2) {
          ((Music*) db[i]) -> printInfo();
        } else if(db[i] -> getID() == 3) {
          ((Movie*) db[i]) -> printInfo();
        }
      }
    }
  } else if (input == 2) {
    char year[5];
    
    cout << "What year was it released in?" << endl;
    cin.getline(year, 5);

    cout << "\nHere are your results: " << endl;
    
    for (int i = 0; i < db.size(); i++) {
      if (strcmp(year, db[i] -> getYear()) == 0) {
        if (db[i] -> getID() == 1) {
          ((VideoGame*) db[i]) -> printInfo();
        } else if(db[i] -> getID() == 2) {
          ((Music*) db[i]) -> printInfo();
        } else if(db[i] -> getID() == 3) {
          ((Movie*) db[i]) -> printInfo();
        }
      }
    }
  }
}

void del(vector<Media*> db) {
  int input;
  
  cout << "Would you like to delete by (1) title or (2) year?" << endl;
  cin >> input;
  
  if (input == 1) {
    char title[42];
    
    cout << "What's the title?" << endl;
    cin.getline(title, 42);
    cin.ignore();
    
    for (int i = 0; i < strlen(title); i++) {
      title[i] = toupper(title[i]);
    }

    cout << "\nHere are your results: " << endl;
    
    for (int i = 0; i < db.size(); i++) {
      if (strcmp(title, db[i] -> getTitle()) == 0) {
        if (db[i] -> getID() == 1) {
          delete ((VideoGame*) db[i]);
	  db.erase(db.begin() + i);
        } else if(db[i] -> getID() == 2) {
          delete ((Music*) db[i]);
	  db.erase(db.begin() + i);
        } else if(db[i] -> getID() == 3) {
          delete ((Movie*) db[i]);
	  db.erase(db.begin() + i);
        }
      }
    }
  } else if (input == 2) {
    char year[5];
    
    cout << "What year was it released in?" << endl;
    cin.getline(year, 5);

    cout << "\nHere are your results: " << endl;
    
    for (int i = 0; i < db.size(); i++) {      
      if (strcmp(year, db[i] -> getYear()) == 0) {
        if (db[i] -> getID() == 1) {
	  delete ((VideoGame*) db[i]);
	  db.erase(db.begin() + i);
        } else if(db[i] -> getID() == 2) {
          delete ((Music*) db[i]);
	  db.erase(db.begin() + i);
        } else if(db[i] -> getID() == 3) {
          delete ((Movie*) db[i]);
	  db.erase(db.begin() + i);
        }
      }
    }
  }
}
