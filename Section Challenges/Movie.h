

/*
Holds the class members, - name, rating, watched


*/

#include <iostream>                 
#include <vector> 

using namespace std; 

class Movie 
{   
    private: 
        string name;
        string rating; 
        string watched; 

    public: 
    
    // Constructor (This intializes it with the val)
    Movie(name_val, rating_val, watched_val); 
        // : name{name_val}, rating{rating_val}, watched{watched_val}{}
    // Copy Construstor 
    Movie(const Movie &source); 
    // Destructor 
    ~Movie(); 
    // setter and getter methods
    void set_name(name_val){this->name = name;}
    void get_name() const
    {
        return name; 
    } 

    void set_rating(rating_val){this->rating = rating_val;}  
    void get_rating() const
    {
        return rating; 
    }
    
    void set_watched(wathed_val){this->watched;}
    void get_watched() const
    {
        return watched; 
    } 

    void increment_watched() 
    {
        ++watched; 
    }

    void display() const; 


}
