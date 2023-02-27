/*==========================================================

 Title:     Assignment 8 - C++ Wizard Creature Department
 Course:  	CIS 2252
 Author:  	<Nathan Davis>
 Date:    	<11/25/22>
 Description: This program creates 3 classes. The Creature class (parent) has 
 the getters and setters for the name and quantity variables. The Phoenix and 
 the Basilisk subclasses override the parent class and makes a few changes of 
 their own. 
 Within the main(), I created (well you) an array to store names. Then I wrote a
 while loop to ask for names until nameArr[2] = "clover"
 Then, by calling the printStatement from three different classes, you can see 
 how they are different even though you are calling the same function.

 ==========================================================
*/

#include <iostream>

using namespace std;
// Creature Class below
class Creature {
    
    public:
    string name;
    int quantity;
    string creatureType;
    Creature(){};
    Creature(string n, int q){
        name = n;
        quantity = q;   
    }
   
    // getter and setter for name
    void setName(string n){
        name = n;
    }
    string getName(){
        return name;
    }
    
    //getter and setter for quantity
    void setQuantity(int q){
        quantity = q;
    }
    int getQuantity(){
        return quantity; 
    }
    
    void printStatement(){
        cout << "There's " << quantity << " creatures named " << name <<endl;
    }
};
    // Phoenix class below
class Phoenix: public Creature {
    public:
    string creatureType = "phoenix";
    string color;
    
    //getter and setter for color
    void setColor(string c){
        color = c;
    }
    string getColor(){
        return color;
    }
    void printStatement(){
        cout << "There's " << quantity << " " << color << " phoenixes named " << name <<endl;    
    }
};
// Basilisk class below
class Basilisk: public Creature {
    public:
    string creatureType = "basilisk";
    
    void printStatement(){
        cout << "There's 1 basilisk named " << name <<endl;
    }
};

int main()
{
    
    int i;
    
	//create empty array of size 3 for storing name
    string nameArr[3];
    
	// Write loop here to record user input as names
    // and set third name to “Clover”
    while(nameArr[2] != "Clover"){
        
        cin >> nameArr[0];
        cin >> nameArr[1];
        nameArr[2] = {"Clover"};
        
    }
    

	Creature c(nameArr[0], 2);
	//print statement from class
	c.printStatement();

	Phoenix p;
	//sets name, quantity and color
	p.setName(nameArr[1]);
	p.setQuantity(3);
	p.setColor("golden");
    //print statement from class
	p.printStatement();

	Basilisk b;
    //sets name
	b.setName(nameArr[2]);
    //prints statement from class
	b.printStatement();

    
}

