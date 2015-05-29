//
//  Theater.cpp
//  Test 1
//
//  Created by Derek Hansen on 5/29/15.
//  Copyright (c) 2015 Derek Hansen. All rights reserved.
//

#include "Theater.h"

Theater::Theater(string nwName, string nwPhone)
{
    name = nwName;
    
    phone = nwPhone;
    
    cokeprice = 5;
    
    popcornprice = 7;
    
    movieCount = 0;
}

void Theater::AddMovie(Movie &movie)
{
    
    movieList[movieCount] = movie;
   
    movieCount += 1;
   
}

int Theater::getCokePrice()
{
    return cokeprice;
    
}

int Theater::getPopcornPrice()
{
    return popcornprice;
}



string Theater::getMovieForHour(int hour)
{
    for (int m = 0; m < movieCount; m++){
       
        if (movieList[m].getShowtime() == hour) {
        
            return movieList[m].getTitle();
        }
    }
    return "";
}

int Theater::getShowTimeForGenre(string Genre)
{
    for (int m = 0; m < movieCount; m++){
       
        if (movieList[m].getGenre() == Genre) {
        
            return movieList[m].getShowtime();
        }
    }
    return -1;
    
}




















