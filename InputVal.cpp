/***********************************************************************************************
 * Author: Group 22 (Shon Cmaralinghi, .., ..)
 * Date: 1/26/2019
 * Description: input validation implementation
 ***********************************************************************************************/

#include "InputVal.hpp"

void checkInt(int value){
    while(cin.fail()){
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "You have entered the wrong type of input. \n   Please enter an integer: ";
        cin >> value;
        cout << endl;
    }
}
//ref Thomas Hart [adapted]
int integerValidation() {

    bool isInteger = true;
    std::string input;
    std::getline(std::cin, input);

    for(unsigned int i = 0; i < input.size(); i++)
    {
        if(!(isdigit(input.at(i))))
            isInteger = false;
    }

    while(!isInteger)
    {
        std::cout << "Error: Expected a positive integer value.\n";
        std::cout << "Please try again.\n";
        std::getline(std::cin, input);
        isInteger = true;
        for(unsigned int i = 0; i < input.size(); i++)
        {
            if(!(isdigit(input.at(i))))
                isInteger = false;
        }
    }
    try {
        return stoi(input);
    }
    catch (std::invalid_argument) {
        throw ;
    }

}

void checkChar(char expectedChar1, char expectedChar2, char input){
    while((expectedChar1 != tolower(input)) && (expectedChar2 != tolower(input))) {
        cout << "You entered: " << input << ". That's not a valid option. \nPlease try again: " << endl;
        cin >> input;
    }
}

void checkRange(int min, int max, int &input){
    while ((min > input) || (max < input)){
        cout << "You entered: " << input << "\n Acceptable range is from " << min << " to " << max << endl;
        cout << "Please try again: ";
        cin >> input;
    }
}


void checkSign(int input) {
    while (input <= 0){
        cout << "You entered: " << input << "\n Negative numbers are not acceptable for array structures\n" << endl;
        cout << "Please try again: ";
        cin >> input;
    }
}


