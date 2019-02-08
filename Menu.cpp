/**************************************************************************************************
* Author: CS162 group 22 (Shon Camarlinghi, ,..)
* Date: 2/7/2019
* Description: Menu class declaration, uses map STL for practice
**************************************************************************************************/

#include "Menu.hpp" //all includes and comments int this file

Menu::Menu() {
	key_ = 0;
	banner_ = " ";
}

Menu::~Menu() {
	// Iterator pointing to the first element in map
	auto it = mapMenu_.begin();
	while (it != mapMenu_.end()) {
		it = mapMenu_.erase(it); //erase() returns the iterator of the next to last deleted element
		it++;
	}
}

void Menu::showBanner() {
    std::cout << banner_ << std::endl;
}

void Menu::setBanner(string banner) {
    banner_ = std::move(banner);
}

void Menu::insertData(int key, string data) { // insert menu options to mapMenu_ map object
    mapMenu_.insert(std::make_pair((key_ += 1), data ));
}

//Ref: https://stackoverflow.com/questions/14070940/c-printing-out-map-values
void Menu::showAllMenu() {
    for (auto& t : mapMenu_)
        std::cout << t.first << " : " << t.second << std::endl;
}

void Menu::showOption(int option) {
    for (auto& t : mapMenu_) {
        if (t.first == option) {
            std::cout << t.first << " : " << t.second << std::endl;
        }
    }
}

