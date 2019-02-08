/**************************************************************************************************
* Author: CS162 group 22 (Shon Camarlinghi, ,..)
* Date: 2/7/2019
* Description: Menu class declaration, uses map STL for practice
**************************************************************************************************/

#ifndef CS162_GROUP22_MENU_HPP
#define CS162_GROUP22_MENU_HPP

#include <iostream>
#include <string>
#include <map>
#include <iterator>

using std::string;

class Menu {
public:
	Menu();
	~Menu();
	void showAllMenu(); //
    void showBanner(); // shows current menu banner
    void setBanner(string); // sets new menu banner
    void insertData(int, string); //insert row number and menu option into menu
    void showOption(int option); //prints # row from map and takes user input

private:
	int key_;
	string banner_;
	std::map<int, std::string> mapMenu_; 

};











#endif //CS162_GROUP22_MENU_HPP
