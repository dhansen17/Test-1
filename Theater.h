#ifndef Test_1_Theater_h
#define Test_1_Theater_h

#include <string>

#include <iostream>

#include "Movie.h"

using namespace std;

class Theater
{
public:
    
    Theater(string Name, string  Phone); //The name for this theater
   
    void AddMovie(Movie &movie); //Add a movie at a specific time
    
    string getMovieForHour(int Hour); //Return the movie shown at or after the given hour
    
    // Return "" if none are upcoming
    
    int getShowTimeForGenre(string Genre); //When will the movie of the given genre be shown?
    // Return -1 if none exist
    
    int getPopcornPrice(); //Make up a cost in dollars for popcorn
    
    int getCokePrice(); //Make up a cost on Coke
    
private:
    string name;
    
    string phone;
    
    string genre;

    int hour;
    
    int cokeprice;
    
    int popcornprice;
    
    int movieCount;
    
    Movie movieList[11];
};

#endif
