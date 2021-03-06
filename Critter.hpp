/*****************************************************************************************************************
* Author: CS162 group 22
* Date: 2/8/2019
* Description: declaration for Critter base class
****************************************************************************************************************/

#ifndef CRITTER_HPP
#define CRITTER_HPP

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <tuple>
using std::string;

class Critter {
public:
	Critter();
	~Critter();
	void setAge(int age);
	void setLoc(int x, int y); 
	int getAge();
	int getLoc(); // https://stackoverflow.com/questions/321068/returning-multiple-values-from-a-c-function	
	string getType;
	void setType(string type);
	virtual void move(int x, int y);
	virtual void breed();
    virtual bool die(); 

protected:
<<<<<<< HEAD
	string critterType_; // type of critter (ant or Doodlebug
	int age_; //number of steps
	int x_; 
	int y_; 
	bool dead_; 
=======
	virtual void move();
	virtual void breed();
   	virtual void die(); 

private:
	int age_;
	int location_; //stores x, y coordinates of the critter

>>>>>>> ae15ad625fd3a6fd5cdb12f6f4fc853e8bc16c79
}; 

#endif //CRITTER_HPP

