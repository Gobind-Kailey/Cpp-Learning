
#include <iostream> 

#include "Movie.h"

using namespace std;

// Constructor 
Movie::Movie(string name_val, string rating_val, int watched_val); 
        : name{name_val}, rating{rating_val}, watched{watched_val}{}


// Copy Constructor

Movie::Movie(const Movie &source)
:Movie{source.name, source.rating, source.watched}{} // preforming delegation 

// Destructor 

Movie::~Movie(){}

void Movie::display() const
{
    cout << "name: " << name << " Rating: " << rating << " Watched: " << watched << endl; 
}