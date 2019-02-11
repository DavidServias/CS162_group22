/*****************************************************************************************************************
* Author: CS162 group 22 (Kadeem Wyllie, Shon Camarlinghi, David Servias)
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


class Critter {
public:
	Critter();
	~Critter();
	void setAge(int age);
	void setLoc(int x, int y); //https://stackoverflow.com/questions/321068/returning-multiple-values-from-a-c-function
	int getAge();
	int getLoc();

protected:
	virtual void move();
	virtual void breed();
   	virtual void die(); 

private:
	int age_;
	int location_; //stores x, y coordinates of the critter

}; 

#endif //CRITTER_HPP

