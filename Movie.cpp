//
//  Movie.cpp
//  Test 1
//
//  Created by Derek Hansen on 5/28/15.
//  Copyright (c) 2015 Derek Hansen. All rights reserved.
//

#include "Movie.h"
#include <iostream>

using namespace std;

Movie::Movie()
{
    title = "Hansens Are Fighting Back";
    
    genre = "Comdedy";
    
    time = 9;
    
}

Movie::Movie(string nwtitle, string nwgenre, int nwtime)
{
    title = nwtitle;
    
    genre = nwgenre;
    
    time = nwtime;
}

string Movie::getGenre()
{
    return genre;
    
}

string Movie::getTitle()
{
    return title;
    
}

int Movie::getShowtime()
{
    return time;
}


