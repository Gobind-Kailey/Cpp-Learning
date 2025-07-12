
/*





*/



#include <iostream> 
#include "Movies.h"

using namespace std; 

// Note that the two add_movie
void add_movie_check(Movies &movies, string name, string rating, int watched)
{
    if(movies.add_movie(name, rating, watched)) cout << "Added";
    else cout << "Already Exists"; 

}



int main()
{

    Movies movies_collection;
    movies_collection.display(); 

    add_movie(my_movies, "Big", "PG-13",2);                 
    add_movie(my_movies,"Star Wars", "PG",5);
    add_movie(my_movies,"Cinderella", "PG",7);

    movies_collection.display(); 

    return 0; 
}