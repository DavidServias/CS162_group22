/*****************************************************************************************************************
* Author: CS162 group 22 (Kadeem Wyllie, Shon Camarlinghi, David Servias)
* Date: 2/8/2019
* Description: declaration for Ant class
****************************************************************************************************************/

#ifndef ANT_HPP
#define ANT_HPP

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <tuple>
#include "Critter.hpp"


class Ant: public Critter {
public:
/*INHERITED FROM CRITTER
 * 	Critter();
	~Critter();
	void setAge(int age);
	void setLoc(int x, int y); //https://stackoverflow.com/questions/321068/returning-multiple-values-from-a-c-function
	int getAge();
	int getLoc();

*/
protected:
  void move();
  void breed();
  void die(); 


private:
  int age_;
  int location_; //stores x, y coordinates of the critter

}; 

#endif //ANT_HPP

