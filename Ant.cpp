/*****************************************************************************************************************
* Author: CS162 group 22 (Kadeem Wyllie, Shon Camarlinghi, David Servias)
* Date: 2/8/2019
* Description: declaration for Ant class
****************************************************************************************************************/



#include <ctime>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <tuple>
#include "Ant.hpp"
#include "Critter.hpp"


/*INHERITED FROM CRITTER
 * 	Critter();
	~Critter();
	void setAge(int age);
	void setLoc(int x, int y); //https://stackoverflow.com/questions/321068/returning-multiple-values-from-a-c-function
	int getAge();
	int getLoc();
*/

void Ant::move() {
  int oldX, oldY;//current coordinates
  int newX, newY;
  int numRows, numCols;
  bool cellOpen = true;
  int d=rand() % 4 +1;
  switch (d) {
    case 1: 
      if (oldY != 0) {//if not the upper most row
       newY -= 1;
       setLoc(oldX, newY); 
      } 
      else {
        cellOpen = false;
      };
      break;
    case 2:
      if (oldX != numCols-1) {//if we're not on the right most col
        newX = oldX + 1;
        setLoc(newX, oldY);
      } 
      else {
        cellOpen = false;
      };
      break;
    case 3: 
      if (oldY != numRows-1) {//of note the lower most row
        newY = oldY - 1;
        setLoc(oldX, newY);
      }
      else {
        cellOpen = false;
      };
      break;
    case 4: 
      if (oldX != 0) {//if not the left most column
        newX = oldX - 1;      
        setLoc(oldX, newY);
      }
      else {
        cellOpen = false;
      };
      break;
  };


 

};

//void move();
//void breed();
//void die(); 

//private:
//	int age_;
//	int location_; //stores x, y coordinates of the critter

//}; 


