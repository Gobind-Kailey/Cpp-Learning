#include <iostream> 
#include <vector>
using namespace std; 

/*

One object is an index of the vector 


*/


class Movie
{
    friend class Movies; // This allows Movies to have the entire collection of movie 
    private: 
        string name; 
        string rating; 
        int watched;  

    public:     
        Movie(string name_string, string rating_value, int watched_times)       // constructor, we have created the constructor here and 
            :name{name_string}, rating{rating_vlaue}, watched{watched_times}{}  // initialized it with the values that was passed through 


        
}   


class Movies
{
    private: 
        vector<Movie> collection;
    
    public: 

        void add_movie(string name_string, string rating_value, int watched_times)
            {
                for(const Movie& movie: collection)
                {
                    if(movie.name == target_name)
                    {
                        cout << "Movie is already in the collection" << endl;  
                        return; 
                    }
                                               
                }
                
                collection.push_back(Movie{name, rating, watched}); 
            }
        
        void increment(string target_name)
        {
            for(const Movie &movie : collection)
            {
                if(movie.name == target_name)
                {
                    cout << "Found movie"; 
                    movie.watched++; 
                    return; 
                }
            }
            cout << "The movie was not found, so nothing was increamented"

        }  
        
    
        void display(Movie object)
        {
            for(const Movie& movie: collection )
            {

                cout << "Name: " << movie.name << "Rating: " << movie.rating << "Watched count: " << movie.watched; 
            }
        } 

}


int main()
{
    // Create movies object                                                                                     
    Movies object1; 
    object1{"The Matrix", "R", 1}; 

    // cin >> "Insert movie name: " >> Movies.name << endl; 
    // cin >> "What is movies rating?: " >> Movies.rating << endl;
    // cin >> "What is movies rating?: " >> Movies.watched << endl;

    





    return 0; 
}