#include <iostream>
#include <vector>


using namespace std; 


int main(){

    // decalring vectors 
    // vector <char> vowels (5);
    // vector <int> test_scores (10);

    // Declaring and Initalizing vectors 
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    // Notice that the remaining numbers are considered as 0. 
    vector <int> test_scores {100, 98, 89, 93}; 

    // Accessing vector indices 
    // cout << test_scores[0] << endl; 
    cout << test_scores.at(0) << endl;

    test_scores.push_back(1090);
    cout << test_scores[4]<< endl; 

    // The first parameter represents the vector size and the second represents the value given to all. 
    vector <double> hi_temperature(365, 80.0);


    vector <vector<int>> movie_ratings{
        {1,2,3,4}, 
        {1,2,4,4}, 
        {1,3,4,5}
    };

    cout << movie_ratings.at(2).at(3); 

}