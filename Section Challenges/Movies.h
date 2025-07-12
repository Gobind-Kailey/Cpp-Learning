


#include <iostream> 
#include <vector> 
#include "Movie.h"

using namespace std; 

class Movies
{   
    private: 
        vector<Movie> collection;    


    Public: 
        Movies();
        ~Movies();      
        Movies add_movie(string name, string rating, int watched);
        Movies increament(collection[i]); 
        Movies display(collection);

    

}