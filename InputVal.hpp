/***********************************************************************************************
 * Author: Shonchalay Cmaralinghi
 * Date: 1/26/2019
 * Description: input validation definitions
 ***********************************************************************************************/


#ifndef LAB4_WITHMAP_INPUTVAL_HPP
#define LAB4_WITHMAP_INPUTVAL_HPP


#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<limits>
#include <cstddef>
#include<string>
#include <sstream>
#include <limits>
#include <climits>
#include <cmath>


void checkInt(int);
int integerValidation();
void checkChar(char, char, char);
void checkRange(int min, int max, int &);
void checkSign(int);


#endif //LAB4_WITHMAP_INPUTVAL_HPP
