#include <iostream> 
#include <string> 
#include <vector> 


using namespace std; 

class Player
{
    public: 
        //attributes
        string name = {"Player"}; 
        int health = 100; 
        int xp = 3; 

        //methods  
        void talk(string text_to_say) {cout << name << "Says" << text_to_say << endl; } 

        bool is_dead();   

};

class Account 
{
    public:     
        //attributes 
        string name = "Account"; 
        double balance = 0.0; 

        //methods 
        bool deposit(double);
        bool withdraw(double); 
    

}; 


int main()
{

    Player frank; 
    frank.name = "Frank";
    frank.health = 100; 
    frank.xp = 12;  
    frank.talk("Hi there");  

    Player *enemy = new Player;
    enemy->xp = 15; 
    enemy->talk("I will distory you ");
  

    Account frank_account;
    Account jim_account; 

    Player frank; 
    Player hero; 

    Player players[] = {frank, hero}; 

    vector<Player> player_vec; 
    player_vec.push_back(hero); // Adding another vector element 
    player_vec.push_back(frank); // Adding another vector element 

    Player *enemy = new Player; 
    delete enemy; 

    return 0; 
}

