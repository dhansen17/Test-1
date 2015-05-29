//
//  Movie.h
//  Test 1
//
//  Created by Derek Hansen on 5/28/15.
//  Copyright (c) 2015 Derek Hansen. All rights reserved.


#ifndef Test_1_Movie_h
#define Test_1_Movie_h
#include <string>

using namespace std;

class Movie
{
public:
  
    Movie();
   
    Movie(string title, string genre, int showtime);
    
    int getprice();
    
    string getTitle();
    
    string getGenre();
    
    int getShowtime();
    
private:
    
    int time;
   
    string title;
    
    string genre;
   
    
    
};

#endif
