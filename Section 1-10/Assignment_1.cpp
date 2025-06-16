#include <iostream>


// #define SIZE 4
using namespace std;


int main(){

    
    string word= "ABC";
    int middle_point = word.size() - 1;
    // cout << middle_point; 
    int count = 0; 
    int placement; 
    

    for(int i=0; i < word.size(); i++)
    {
        for(int j= 0;j < SIZE*2 - 1; j++)
        {
            placement = middle_point - count; 
            
        }
        count ++;

    }
    
  
    


    return 0; 
}