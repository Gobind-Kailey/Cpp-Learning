#include <iostream>
#include <vector> 

using namespace std; 
int main(){


    char name[6] = "Buste";

    vector <int> v1 {};
    vector <int> v2 {};

    v1.push_back(10);
    v1.push_back(30);

    cout << v1.size() << endl;
    
    v2.push_back(100);
    v2.push_back(200);

    vector <vector<int>> vector_2D{};
    
    vector_2D.push_back(v1);
    vector_2D.push_back(v2);

    cout << vector_2D.at(0).at(0) << endl;

    v1.at(0) = 1000;
    cout << v1.at(0) << endl;

    cout << vector_2D.at(0).at(0) << endl;







    return 0; 
}