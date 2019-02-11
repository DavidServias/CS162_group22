/*****************************************************************************************************************
* Author: CS162 group 22
* Date: 2/8/2019
* Description: implementation for Critter base class
****************************************************************************************************************/


#include "Critter.hpp"



Critter::Critter(int x, int y) {
	type_ = " ";
	age_ = -1;
	x_ = x;
	y_ = y; 
	dead_ = false;
}

Critter::~Critter() {
}

void Critter::setAge(int age) {
	age_ = age;
}

void Critter::setLoc(int x, int y) {
	x_ = x;
	y_ = y;
}

int Critter::getLoc() { // https://stackoverflow.com/questions/321068/returning-multiple-values-from-a-c-function
	return x_, y_;
}

int Critter::getAge() {
	return age_;
}

string getType() {
	return critterType_ ;
}

void setType(string type) {
	critterType_ = type;
}

void Critter::move(int x, int y) {
	x_ = x;
	y_ = y;
}

void Critter::breed() {
	
}

bool Critter::die() {
	dead_ = true;
	return dead_;
}




